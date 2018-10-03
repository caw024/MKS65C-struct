#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct pokemon {char name[20];int level;struct pokemon * n;};
struct pokemon pokemons[3];


struct pokemon randpoke(){
  srand(time(NULL));
  return pokemons[rand() % 3];
}

void info(struct pokemon A){
  printf("Pokemon: %s\nLevel: %d\n",A.name,A.level);
}

void modifylevel(struct pokemon * A, int lvl){
  (*A).level = lvl;
}


int main(){

  struct pokemon Pikachu;
  strcpy(Pikachu.name,"Pikachu");
  Pikachu.level = 20;
  Pikachu.n = &Pikachu;

  struct pokemon Charizard;
  strcpy(Charizard.name,"Charizard");
  Charizard.level = 5;

  struct pokemon Blastoise;
  strcpy(Blastoise.name,"Blastoise");
  Blastoise.level = 500;

  pokemons[0] = Pikachu;
  pokemons[1] = Charizard;
  pokemons[2] = Blastoise;
  
  struct pokemon rando = randpoke();
  info(rando);

  modifylevel(Pikachu.n, 100);
  printf("Pikachu is now level %d\n", Pikachu.level);
}
