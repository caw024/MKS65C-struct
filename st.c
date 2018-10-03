#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct pokemon {char name[20];int level;};
struct pokemon pokemons[3];


struct pokemon info(){
  srand(time(NULL));
  return pokemons[rand() % 3];
}

int main(){

  struct pokemon Pikachu;
  strcpy(Pikachu.name,"Pikachu");
  Pikachu.level = 20;

  struct pokemon Charizard;
  strcpy(Charizard.name,"Charizard");
  Charizard.level = 5;

  struct pokemon Blastoise;
  strcpy(Blastoise.name,"Blastoise");
  Blastoise.level = 500;

  pokemons[0] = Pikachu;
  pokemons[1] = Charizard;
  pokemons[2] = Blastoise;
  
  struct pokemon rando = info();
  
  printf("Pokemon: %s\nLevel: %d\n",rando.name,rando.level);
}
