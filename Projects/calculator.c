# Libraries
#include<gtk/gtk.h>// Using gtk for the GUI part

#include<stdlib.h>// Memory allocation, process control, conversion, and more
#include<string.h>// Perform tasks on strings
#include<stdbool.h>// Manage the boolean variable

typedef struct{
	GtkWidget *window;// Main application window
	GtkWidget *grid;// Grid container to arrange buttons
	GtkWidget *button[17];// Array to hold 17 calculator buttons
}calc;

GtkWidget *box; // Entry box to show input/output text

// Variables
#define SIZE 10

char input_buffer[100] = {0};// Holds the current number being typed
char output_buffer[100] = {0};// Holds the entire display content

bool clear_buffer = false;// Flag to clear input buffer after operator
bool add=false;// Addition operation flag
bool mul = false;// Multiplication operation flag
bool divv = false;// Division operation flag
bool sub = false;// Subtraction operation flag

float result = 0.0;// Final result of the calculation
static float num[SIZE];// Array to hold numbers for calculation
int count = 0;// Index for num[] to track how many values entered

static void calculate(GtkButton *button, gpointer data){
	const gchar* text = gtk_button_get_label(button);// Get text from clicked button

	if( (strcmp("+", text)==0) || (strcmp("-", text)==0) || 
	(strcmp("/", text)==0) || (strcmp("x", text)==0) || 
	(strcmp("=", text)==0) ){

	num[count] = atof(input_buffer);// Convert input string to float and store
	count++;// Move to next position in num[]
	clear_buffer = true;// Next input should clear buffer

	// Set appropriate operation flag
	if(strcmp("+",text)==0){ add = true; }
	if(strcmp("-",text)==0){ sub = true; }
	if(strcmp("/",text)==0){ divv = true; }
	if(strcmp("x",text)==0){ mul = true; }
		}
	}

	if(strcmp("=",text)==0){
		int x = sizeof(num)/sizeof(num[0]); // Get number of elements in num[]
		
		// Perform operation based on flag
		if(add){
			for(int i=0; i<x; i++){
				result += num[i];  // Add all elements
			}
		}
		if(divv){
			result = num[0]/num[1];  // Divide first two elements
		}
		if(sub){
			if(result == 0.0){
				result = num[0]*2;  // Adjust result before subtracting
			}
			for(int i=0; i<x; i++){
				result -= num[i];  // Subtract all from result
			}
		}
		if(mul){
			result = num[0]*num[1]; // Multiply first two
		}
		// Reset all flags
		add = false; mul = false; divv = false; sub = false;
		// Display result
		gtk_entry_set_text(GTK_ENTRY(box), "");
		sprintf(output_buffer, "%.3f", result); // Format result
		gtk_entry_set_text(GTK_ENTRY(box), output_buffer);
		result = 0.0; // Reset result
	}	else{  // If number or "." is pressed
		if(clear_buffer){
			memset(input_buffer,0,strlen(input_buffer));  // Clear input buffer
			clear_buffer = false;
		}else{
			strncat(input_buffer,text, 1);  // Add character to input buffer
		}
		
		strncat(output_buffer,text, 1);  // Add to display buffer
		gtk_entry_set_text(GTK_ENTRY(box), output_buffer);  // Update display
	}

	// If "C" is pressed, reset everything
	if(strcmp("C",text)==0){
		gtk_entry_set_text(GTK_ENTRY(box), "");  // Clear display
		memset(input_buffer,0,strlen(input_buffer));
		memset(output_buffer,0,strlen(output_buffer));

		count = 0;
		int x = sizeof(num)/sizeof(num[0]);
		for(int i=0; i<x; i++){
			num[i] = 0;  // Reset numbers
		}

		// Reset flags
		add = false;
		mul = false;
		divv = false;
		sub = false;
	}

// Callback for GTK application activation
static void activate(GtkApplication *app, gpointer user_data){
	calc widget;

	// Create and configure main window
	widget.window = gtk_application_window_new(app);
	gtk_window_set_position(GTK_WINDOW(widget.window),GTK_WIN_POS_CENTER);
	gtk_window_set_title(GTK_WINDOW(widget.window),"Las Creations Calculator");
	gtk_window_set_default_size(GTK_WINDOW(widget.window), 200, 200);
	gtk_container_set_border_width(GTK_CONTAINER(widget.window),10);