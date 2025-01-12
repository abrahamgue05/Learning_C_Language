#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE * fpointer = fopen("employees.txt", "a");/*Open a file, 
    can specify a path if not it will be created in the same file
    r: Read,
    w: Write,
    a: append
    */
   //fprintf(fpointer, "Jim, Salesman,\nPam, Receptionist\nOscar,Accounting");
   //Write information to a file. fprintg(where)
   //fprintf(fpointer, "overridden");
   fprintf(fpointer,"\nKelly, Customer Service");
   fclose(fpointer);//Close the file ALWAYS CLOSE IT.

    return 0;
}