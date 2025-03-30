#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    /*if(argc == 2){
    printf("hello, %s\n", argv[2]); //Gets a value from terminal
    }else{
        printf("Hello, world\n");
    }*/
   for(int i = 0; i < argc; i++){
        printf("%s\n", argv[i])// For no length idea.
   }
}
