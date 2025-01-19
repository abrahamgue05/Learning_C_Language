#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for(int i = 0; i < 6; i++){

        if(strcmp(strings[i], s) == 0){ //Compare strings.
            printf("Found in position %i\n", i + 1);
            return 0; //Indicate success
        }
    }
        printf("Not found\n");
        return 1;
    /*int numbers[] = {20, 500, 10, 5, 100, 1, 50}; //Pre set an array with values
    int n = get_int("Number: ");
    for(int i = 0; i < 7; i++){
        if (numbers[i] == n){
            printf("Found in position %i\n", i + 1);
            return 0; //Indicate success
        }
    }
    printf("Not found\n");
    return 1;*/
}
