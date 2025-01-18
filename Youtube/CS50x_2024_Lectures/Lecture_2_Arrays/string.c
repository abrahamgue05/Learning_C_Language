#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string s = get_string("Input: ");
    printf("Output: ");

    for(int i = 0, n = strlen(s); i < n;i++){// Declare i and n as int.
        printf("%c", s[i]);
    }
    printf("\n");
}
