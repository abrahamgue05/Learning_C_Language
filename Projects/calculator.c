#include<gtk/gtk.h> // Includes GTK library to create graphical user interfaces.
#include<stdlib.h>  // Includes standard library for memory allocation, process control, etc.
#include<string.h>  // Includes string manipulation functions like memset, strncat, etc.
#include<stdbool.h> // Includes definitions for boolean type 'bool'.

// Defines a structure to hold the widgets of the calculator.
typedef struct{
    GtkWidget *window;  // A GTK window widget to hold the entire calculator.
    GtkWidget *grid;    // A GTK grid widget to organize the layout.
    GtkWidget *button[17]; // An array to hold the 17 calculator buttons.
} calc;

GtkWidget *box;  // A global GTK entry widget to display input/output.

#define SIZE 10  // Defines a constant size for the 'num' array.

char input_buffer[100] = {0};  // Input buffer to store the current input text.
char output_buffer[100] = {0}; // Output buffer to store the final result to display.

bool clear_buffer = false;  // Flag to check whether the input buffer should be cleared.
bool add=false;             // Flags for different mathematical operations.
bool mul = false;
bool divv = false;
bool sub = false;

float result = 0.0;  // Variable to store the result of calculations.
static float num[SIZE]; // Array to store the numbers for calculations.
int count = 0; // Counter to keep track of the number of operands.

static void calculate(GtkButton *button, gpointer data) {
    const gchar* text = gtk_button_get_label(button);  // Get the label (text) of the clicked button.

    // Check if the button pressed is an operation (+, -, /, x, or =).
    if( (strcmp("+", text)==0) ||   (strcmp("-", text)==0) ||  
        (strcmp("/", text)==0) ||  (strcmp("x", text)==0) ||  
        (strcmp("=", text)==0) ) {
        
        num[count] = atof(input_buffer);  // Convert the current input text to a float and store it in 'num'.
        count++;  // Increment the counter for the operand.
        clear_buffer = true;  // Set flag to clear the input buffer after the current number is entered.

        // Set the appropriate operation flag based on the button clicked.
        if(strcmp("+",text)==0) {
            add = true;
        }
        if(strcmp("-",text)==0) {
            sub = true;
        }
        if(strcmp("/",text)==0) {
            divv = true;
        }
        if(strcmp("x",text)==0) {
            mul = true;
        }
    }

    // If "=" is clicked, perform the calculation based on the selected operation.
    if(strcmp("=",text)==0) {
        int x = sizeof(num)/sizeof(num[0]); // Calculate the number of elements in the 'num' array.
        
        // If addition is selected, add all numbers in the 'num' array.
        if(add) {
            for(int i=0; i<x; i++) {
                result += num[i];
            }
        }

        // If division is selected, perform division between the first two numbers.
        if(divv) {
            result = num[0]/num[1];
        }

        // If subtraction is selected, subtract all numbers from the first one.
        if(sub) {
            if(result == 0.0) {
                result = num[0]*2;  // If no result is set, initialize it with the first operand.
            }
            for(int i=0; i<x; i++) {
                result -= num[i];
            }
        }

        // If multiplication is selected, multiply the first two numbers.
        if(mul) {
            result = num[0]*num[1];
        }

        // Reset all operation flags.
        add = false;
        mul = false;
        divv = false;
        sub = false;
        
        gtk_entry_set_text(GTK_ENTRY(box), "");  // Clear the display box.
        sprintf(output_buffer, "%.3f", result);  // Format the result to 3 decimal places and store in the output buffer.
        gtk_entry_set_text(GTK_ENTRY(box), output_buffer);  // Display the result in the entry box.
        result = 0.0;  // Reset the result for future calculations.
    }
    else {
        // If the buffer should be cleared, clear the input buffer.
        if(clear_buffer) {
            memset(input_buffer,0,strlen(input_buffer));  // Reset the input buffer.
            clear_buffer = false;  // Reset the clear buffer flag.
        } else {
            strncat(input_buffer,text, 1);  // Add the clicked button's text to the input buffer.
        }

        strncat(output_buffer,text, 1);  // Add the clicked button's text to the output buffer.
        gtk_entry_set_text(GTK_ENTRY(box), output_buffer);  // Update the display box with the new output buffer content.
    }

    // If "C" (Clear) button is pressed, reset the calculator.
    if(strcmp("C",text)==0) {
        gtk_entry_set_text(GTK_ENTRY(box), "");  // Clear the display box.
        memset(input_buffer,0,strlen(input_buffer));  // Reset the input buffer.
        memset(output_buffer,0,strlen(output_buffer));  // Reset the output buffer.

        count = 0;  // Reset the operand counter.
        int x = sizeof(num)/sizeof(num[0]);  // Get the number of elements in the 'num' array.
        
        // Reset all elements of the 'num' array.
        for(int i=0; i<x; i++) {
            num[i] = 0;
        }

        // Reset all operation flags.
        add = false;
        mul = false;
        divv = false;
        sub = false;
    }
}

// This function is called when the GTK application is activated.
static void activate(GtkApplication *app, gpointer user_data) {
    calc widget;

    // Create the window and set its properties.
    widget.window = gtk_application_window_new(app);
    gtk_window_set_position(GTK_WINDOW(widget.window),GTK_WIN_POS_CENTER);  // Center the window.
    gtk_window_set_title(GTK_WINDOW(widget.window),"Las Creations Calculator");  // Set the window title.
    gtk_window_set_default_size(GTK_WINDOW(widget.window), 200, 200);  // Set the default size of the window.
    gtk_container_set_border_width(GTK_CONTAINER(widget.window),10);  // Set the border width around the window.

    widget.grid = gtk_grid_new();  // Create a grid widget to arrange buttons.
    gtk_container_add(GTK_CONTAINER(widget.window),widget.grid);  // Add the grid to the window.

    box = gtk_entry_new();  // Create a new entry widget for displaying input and output.
    gtk_editable_set_editable(GTK_EDITABLE(box), FALSE);  // Make the entry widget non-editable.

    // Create the calculator buttons with appropriate labels.
    widget.button[0] = gtk_button_new_with_label("0");
    widget.button[1] = gtk_button_new_with_label("1");
    widget.button[2] = gtk_button_new_with_label("2");
    widget.button[3] = gtk_button_new_with_label("3");
    widget.button[4] = gtk_button_new_with_label("4");
    widget.button[5] = gtk_button_new_with_label("5");
    widget.button[6] = gtk_button_new_with_label("6");
    widget.button[7] = gtk_button_new_with_label("7");
    widget.button[8] = gtk_button_new_with_label("8");
    widget.button[9] = gtk_button_new_with_label("9");
    widget.button[10] = gtk_button_new_with_label(".");
    widget.button[11] = gtk_button_new_with_label("+");
    widget.button[12] = gtk_button_new_with_label("-");
    widget.button[13] = gtk_button_new_with_label("x");
    widget.button[14] = gtk_button_new_with_label("/");
    widget.button[15] = gtk_button_new_with_label("C");
    widget.button[16] = gtk_button_new_with_label("=");

    // Add the widgets to the grid with appropriate positions and spans.
    gtk_grid_attach(GTK_GRID(widget.grid),box,0,0,4,1);  // Add the entry box at the top.
    
    // Add the calculator buttons to the grid.
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[15],0,1,3,1);  // "C" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[14],3,1,1,1);  // "/" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[7],0,2,1,1);   // "7" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[8],1,2,1,1);   // "8" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[9],2,2,1,1);   // "9" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[13],3,2,1,1);  // "x" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[4],0,3,1,1);   // "4" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[5],1,3,1,1);   // "5" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[6],2,3,1,1);   // "6" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[12],3,3,1,1);  // "-" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[1],0,4,1,1);   // "1" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[2],1,4,1,1);   // "2" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[3],2,4,1,1);   // "3" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[11],3,4,1,1);  // "+" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[0],0,5,2,1);   // "0" button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[10],2,5,1,1);  // "." button
    gtk_grid_attach(GTK_GRID(widget.grid),widget.button[16],3,5,1,1);  // "=" button

    // Connect button clicks to the 'calculate' function.
    g_signal_connect(widget.button[0],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[1],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[2],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[3],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[4],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[5],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[6],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[7],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[8],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[9],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[10],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[11],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[12],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[13],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[14],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[15],"clicked",G_CALLBACK(calculate), NULL);
    g_signal_connect(widget.button[16],"clicked",G_CALLBACK(calculate), NULL);

    // Show all widgets in the window.
    gtk_widget_show_all(widget.window);
}

// Main function that starts the GTK application.
int main(int argc, char **argv){
    GtkApplication *app;

    gtk_init(&argc, &argv);  // Initialize GTK library.

    int status;
    app = gtk_application_new("org.gtk.calculator", G_APPLICATION_FLAGS_NONE);  // Create a new GTK application.

    g_signal_connect(app,"activate", G_CALLBACK(activate), NULL);  // Connect the 'activate' signal to the 'activate' function.
    status = g_application_run(G_APPLICATION(app), argc, argv);  // Run the GTK application.
    g_object_unref(app);  // Release the application object.

    return status;  // Return the status of the application.
}
