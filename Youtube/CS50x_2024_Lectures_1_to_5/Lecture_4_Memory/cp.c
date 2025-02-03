#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]){
    FILE *src = fopen(argv[1], "rb"); //read binary mode
    FILE *dst = fopen(argv[2], "wb"); //write binary mode

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0){ //read one or more bytes
        fwrite(&b, sizeof(b), 1, dst); //write the bytes of fread
    }
    
    fclose(dst);
    fclose(src);
}