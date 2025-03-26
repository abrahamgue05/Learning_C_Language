#include <stdio.h>

struct City{// struct to initialize a struct followed by its name.
  char *name;
  int lat;
  int lon;
};



int main(void){

  struct City c ={// Giving value 1 by 1
    .name = "San Francisco",// The dot is to access the struct.
    .lat = 7,
    .lon = -122
  };

  printf("City: %s\n", c.name);
  printf("Lat: %d\n", c.lat);
  printf("Lon: %d\n", c.lon);
}