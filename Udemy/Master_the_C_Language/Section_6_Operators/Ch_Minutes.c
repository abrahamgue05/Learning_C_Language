/*
Author: Abraham Guerrero
Purspose: (Challenge) Conver minutes to years and days.
Date ... DD/MM/YY
Instruction: Ask user to enter the number of minutes via terminal.
Program should display as outputs the minutes and then its equivalents in years
and days. 
Create variables in doubles exept for minutes it should be int.
Use arithmetic operators.
*/
#include <stdio.h>

int main() {

    int minutes;//Where to storage user input.
    double days, years;// Where calculation goes.
    double minuYear;// Operations for minutes in year
    
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);// Gets minutes from user.

    minuYear = (60 * 24 * 365);// Year to minutes 
    years = (minutes / minuYear);// Turns minutes into years
    days = (minutes / 60.0) / 24.0;// Turns minutes in days

    printf("%d minutes if aproximately %f years and %f days\n", minutes, years, days);

    return 0;
}