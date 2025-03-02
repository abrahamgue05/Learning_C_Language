/*
Author: Abraham Guerrero
Purspose: (Challenge) Understanding char arrays(strings)
Date: 27/02/25 DD/MM/YY
Instruction: Write 3 function
1.- Count the number of char in a string(lenght)
- Can't use strlen library.
- Function should take a string as a parameter.
- Should return an int(the lenght).
2.- Concatenate strings
- Can't use the strcat library function
- 3 parameters: result, char str1, char str2.
- Can return void.
3.- Compare strings
- Can't use string compare.
- Should take two const char array as paramenters
- Return a Boolean
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLenght(const char string[]);
void concat(char result[], const char str[], const char str1[]);
bool equalStrings(const char s1[], const char s2[]);


int main() {

    const char word1[] = "Abraham";
    const char word2[] = "ok";
    const char word3[] = "what ever";
    char result[50];

    printf("%d  %d  %d\n", stringLenght(word1), stringLenght(word2), stringLenght(word3));
    // 5 2 9 print the size of each word.

    concat(result, word1, word2);
    printf("\n%s", result);// Abrahamok

    printf("\n%d", equalStrings("Abraham", "Abraham"));//1
    printf("\n%d", equalStrings("Abraham", "abraham"));//0
    return 0;
} 

int stringLenght(const char string[]){
    int count = 0;

    while (string[count] != '\0')// If the count dosen't find a null the it keeps counting
        ++count;
    
    return count;
}

void concat(char result[], const char str1[], const char str2[]){

    int i, j;

    for(i = 0; str1[i] != '\0'; ++i){
        result[i] = str1[i];   
    }// Copy the first string

    for(j = 0; str2[j] != '\0'; ++j){
        result[i + j] = str2[j];   
    }// Whatever i ended with if added n of char it will start a the n char   

    result[i + j] = '\0';// Add the null terminators
}

bool equalStrings(const char s1[], const char s2[]){
    int i = 0;
    bool isEquals = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++; //See how big both are(check null terminator)

    if(s1[i] == '\0' && s2[i] == '\0')// If null terminator on the same position
        isEquals = true;
    else
        isEquals = false;
    
    return isEquals;
}