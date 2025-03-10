#include <stdio.h>

struct City{// struct to initialize a struct followed by its name.
  char *name;
  int lat;
  int lon;
};



int main(void){

  struct City c = {0};// All values set to 0.

  struct City c = {"San Fransisco", 37, -122};// All values set to each position.

  struct City c ={// Giving value 1 by 1
    .name = "San Fransisco",// The dot is to access the struct.
    .lat = 7,
    .lon = -122
  };

  struct City c;

  c.lat = 37;

}