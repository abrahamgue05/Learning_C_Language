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
