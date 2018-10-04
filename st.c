#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct pokemon {char name[50];int level;struct pokemon * n;};
struct pokemon pokemons[4];


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


void modifyname(struct pokemon * A, char *name){
  strcpy( (*A).name, name);
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
  Charizard.n = &Charizard;

  struct pokemon Blastoise;
  strcpy(Blastoise.name,"Blastoise");
  Blastoise.level = 500;
  Blastoise.n = &Blastoise;

  struct pokemon Alakazam;
  strcpy(Alakazam.name,"Alakzam");
  Alakazam.level = 30;
  Alakazam.n = &Alakazam;

  pokemons[0] = Alakazam;
  pokemons[1] = Charizard;
  pokemons[2] = Blastoise;
  pokemons[3] = Pikachu;

  struct pokemon rando = randpoke();
  printf("There's something in the grass!!!\n");
  info(rando);

  printf("-----------------------------\n");
  printf("You choose Pikachu!\n");
  info(Pikachu);

  attack(Pikachu.n, "electric shock");
  printf("%s\n", Pikachu.name);
  modifyname(Pikachu.n, "Pikachu");
  printf("%s has been defeated...\n", rando.name);
  printf("Pikachus level increased from %d ", Pikachu.level);
  modifylevel(Pikachu.n, 100);
  printf("to %d\n", Pikachu.level);
  printf("%s is tired now, good night...\n", Pikachu.name);
}
