#include <stdio.h>
//Giving an specific value.

typedef enum{
  EXIT_SUCCESS = 0,
  EXIT_FAILURE = 1,
  EXIT_COMMAND_NOT_FOUND = 127,
} ExitStatus;

typedef enum{
  LANE_WPM = 200,
  PRIME_WPM,// 201
  TEEJ_WPM,// 202
} WordsPerMinute;