void swap_ints(int *a, int *b){
  int tmp = *a;// Temporary to store a variable for a short time.
  *a = *b;
  *b = tmp;
}

void swap_strings(char **a, char **b){
  char *tmp = *a;// Dereferences to make it one pointer deep
  *a = *b;
  *b = tmp;
}
