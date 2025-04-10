# Libraries
#include<gtk/gtk.h># Using gtk for the GUI part

#include<stdlib.h># Memory allocation, process control, conversion, and more
#include<string.h># Perform tasks on strings
#include<stdbool.h># Manage the boolean variable

typedef struct{
	GtkWidget *window;# Pointer to gtk window(scree)
	GtkWidget *grid;# Grid lets to lay out child widgets
	GtkWidget *button[17];
}calc;# Gtk instructions for the calculator

GtkWidget *box;# Draws a box for the calculator

# Variables
#define SIZE 10# Max numbers to operate

# Input and Output numbers on scree
char input_buffer[100] = {0};
char output_buffer[100] = {0};

bool clear_buffer = false;# Cleans screen
bool add=false, mul = false, divv = false, sub = false;# Operations
float result = 0.0;# Result
static float num[SIZE];# Store input numbers
int count = 0;# Tracks numbers stored