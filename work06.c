#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Pokemon {char* name; int index;};

struct Pokemon newStruct(){
  char* names[3];
  names[0] = "Bulbasaur";
  names[1] = "Ivysaur";
  names[2] = "Venasaur";
  srand(time(NULL));

  int indeX = rand()%3;
  printf("\n\nindeX: %d\n\n",indeX);
  struct Pokemon ret;
  ret.name = names[indeX];
  ret.index = indeX+1;
  return ret;
  
}

int modifyStruct(struct Pokemon *pointer, int newInt){
  //printf("%p\n", pointer);
  pointer -> index = newInt;
  //printf("%d\n", pointer -> index);
  return 0;
}

int printStruct(struct Pokemon pkmn){
  printf("Name: %s\nNumber: %d\n", pkmn.name, pkmn.index);
  return 0; 
}

int main(){
  struct Pokemon first;

  first = newStruct();
  struct Pokemon *point = &first;

  printf("The Original Struct: \n");
  printStruct(first);
  
  // testing : printf("%p\n\n", point);

  printf("Modifying the struct to have an index of 4...\n");
  modifyStruct(point ,4);

  printf("The Modified Struct: \n");
  printStruct(first);
  return 0;
  
}
