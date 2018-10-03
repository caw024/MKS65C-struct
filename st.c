#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct pokemon {char name[20];int level;struct pokemon * n;};
struct pokemon pokemons[4];


struct pokemon randpoke(){
  srand(time(NULL));
  return pokemons[rand() % 3];
}

void info(struct pokemon A){
  printf("There's something in the grass!!!\nPokemon: %s\nLevel: %d\n",A.name,A.level);
}

void modifylevel(struct pokemon * A, int lvl){
  (*A).level = lvl;
}

void attack(struct pokemon * A, char *attack){
  printf("Pikachu gets ready for attack...\n");
  char * use = " uses ";
  char * ex = "!";
  strcat((*A).name, use);
  strcat((*A).name, attack);
  strcat((*A).name, ex);
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

  struct pokemon Alakazam;
  strcpy(Alakazam.name,"Alakzam");
  Alakazam.level = 30;
  Alakazam.n = &Alakazam;

  pokemons[0] = Alakazam;
  pokemons[1] = Charizard;
  pokemons[2] = Blastoise;
  pokemons[3] = Pikachu;

  struct pokemon rando = randpoke();
  info(rando);

  printf("-----------------------------\n");
  printf("You choose Pikachu!\n");


  attack(Pikachu.n, "electric shock");
  printf("%s\n", Pikachu.name);
  strcpy(Pikachu.name, "Pikachu");
  printf("%s has been defeated...\n", rando.name);
  printf("%s is tired now, good night...\n", Pikachu.name);
}
