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