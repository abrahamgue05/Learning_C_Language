#include <stdio.h>

int main(void){
    /*char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1,c2,c3); //HI!
    printf("%i %i %i\n", c1,c2,c3); //72, 73, 33 */

    /*string s = "Hi!";

    printf("%C%c%c\n", s[0], s[1], s[2]);//Hi!
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // 72 105 33 0 */

    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%i %i %i\n", words[0][0], words[0][1], words[0][2]);
                            //H/72         I/73          !/33
    printf("%i %i %i %i\n", words[1][0], words[1][1], words[1][2], words[1][3]);
                            //B/66           Y/89          E/69          !/33
}