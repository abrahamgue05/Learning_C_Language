#include <stdio.h>

int main() {

    char str[100];
    int i;
    double x;

    printf("Enter a value: ");

    scanf("%d %s %lf", &i, str, &x); // Input a number and a string and a double

    printf("\nYou entered: %d %s %lf", i, str, x);
    return 0;
}