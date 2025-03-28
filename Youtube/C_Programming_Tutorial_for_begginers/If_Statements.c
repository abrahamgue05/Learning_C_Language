#include <stdio.h>
#include <stdlib.h>

/*int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){ //if(condition),{code} //&& Logical operator AND,
    both conditions are TRUE
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){ //Check another condition if the first is false
        result = num2;
    }else{ //execute if the condition is false
        result = num3;
    }
    return result;
}*/


int main() {
    // Programming structure which we can use to help the program to make decision
    //printf("%d", max(40,10,15));

    if(3 > 2 || 2 > 5){ //|| Logical operator OR, one of the conditions has to be TRUE
        printf("True");
    }else{
        printf("False");
    }
    return 0;
    //== Check if conditions are equal
    /*!= Check if conditions is not equal
      !  Negation operator*/

} 