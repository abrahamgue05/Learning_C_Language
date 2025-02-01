#include <stdio.h>
#include <stdlib.h>

int main() {

    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);/*Read the lines of the file one by one//Jim, Salesman
    fgets(place to storage the information, maxsize same as variable line,
    fpointer this move a line forward)*/
    fgets(line, 255, fpointer);//Pam,Receptionist
    printf("%s", line);

    fclose(fpointer);
    return 0;
}