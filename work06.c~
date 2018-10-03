#include <stdio.h>
#include <stdlib.h>

struct Pokemon {char* name; int index;};

int newStruct(){
  return 0;
}

int modifyStruct(struct Pokemon *pointer, int newInt){
  printf("%p\n", pointer);
  pointer -> index = newInt;
  printf("%d\n", pointer -> index);
  
  return 0;
}

int printStruct(){
  return 0; 
}

int main(){
  char* test = "h";

  struct Pokemon first;
  first.name = test;
  first.index = 5;

  struct Pokemon *point = &first;

  printf("%p\n\n", point);

  modifyStruct(point, 4);

  return 0;
  
}
