#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variables: Container where we can store different types of data(number,text, caracters, etc)
    char characterName[] = "Tom"; //Data type, variable name[], value; char = numbers and letters
    int characterAge = 67; //Data type, variable name, value, int = numbers
    
    printf("There once was a man named %s\n", characterName); //%s instert the value of the variable(String)
    printf("he was %d years old.\n", characterAge); //%d inster the value of the variable(number)
    characterAge = 30; // Can change the variable values (will afect only lines down the new change)
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d\n", characterAge);
}