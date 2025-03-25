/*
Author: Abraham Guerrero
Purpose: (Challenge) Print the area of a rectangle
Date 12/02/25 DD/MM/YY

Instruction: Create a program that display the perimeter and area of a rectangle.
Create 4 variables of type double(width, height, perimeter and area).
Program should perform calculations perimeter (height + width * 2) and area (width
*  height)
Program should display height width and area.
*/
#include <stdio.h>

int main() {

    double width = 12.5;
    double height = 6.25;
    double perimeter;
    double area;

    printf("The width of the rectangle is: %.2f\n", width);// Prints width.
    printf("The height of the rectangle is: %g\n", height);// Prints height.

    printf("The perimeter of the rectangle is: %g\n", perimeter = (height + width *2)); 
    // Prints the perimeter doing the calculation inside de printf().

    area = width * height;// Calculates the area outside of the printf().
    printf("The area of the rectangle is: %.4f\n", area);// Prints the area.


    return 0;
}