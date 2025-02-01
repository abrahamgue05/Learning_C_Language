#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[3][2] ={ //Data type, variable name[column][row ] = {values}
                    {1, 2},
                    {3, 4},
                    {5, 6}
                  };

    int i, j;
    for(i = 0; i < 3; i++){//Everytime this loop runs thw other loop runs
      for(j = 0; j < 2; j++){//Index start in 0
        printf("%d,",nums[i][j]);//Print nums values.
      }
      printf("\n");
    }
    //printf("%d", nums[0][0]);//[column][row]
    return 0;
} 