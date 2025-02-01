#include <stdio.h>
#include <stdlib.h>

int main() { //This is a function
    //Function: Collection of code that performs an specific task

    printf("Top\n"); //Order matters
    sayHi("Abraham", 19);// Call the function to execute it
    sayHi("Tom", 23);
    sayHi("Dan", 34);
    printf("Bottom"); //Order matters
    return 0;
} //End function


void sayHi(char name[], int age){// Void: This fuction isn't going to return any information, function name, (parameters(can be empty)),{code}.
    printf("Hello %s, you are %d\n", name, age);
}