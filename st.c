#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct pokemon {char name[15];int level;};

struct pokemon Pikachu;
strcpy(Pikachu.name,"Pikachu");
Pikachu.level = 20;

struct pokemon Charizard;
strcpy(Charizard.name,"Charizard");
Charizard.level = 5;

struct pokemon Blastoise;
strcpy(Blastoise.name,"Blastoise");
Blastoise.level = 500;

struct pokemon pokemons[4] = { Pikachu,Charizard, Blastoise};

struct pokemon info(){
  srand(time(NULL));
  return pokemons[rand() % 3];
  
  
}

int main(){
  struct pokemon rando = info();
  printf("Pokemon: %s/nLevel: %d",rando.name,rando.level);
}
