#include <stdio.h>
#include <stdlib.h>

double cube(double num); //Prototype: call a function that is below int main().

/*double cube(double num){ /*We don't use void as it returns information
    
    //double result = num * num * num;
    return num * num * num;
    printf("No line after return will run");
}*/

int main() {
    /*Return: Special line of code in a function 
    which will allow them to return information where is call*/

    printf("Answer: %f", cube(7.0));
    return 0;
}


double cube(double num){ 
    return num * num * num;
}