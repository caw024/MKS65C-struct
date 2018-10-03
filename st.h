struct pokemon {char name[20];int level;struct pokemon * n;};
struct pokemon randpoke();
void info(struct pokemon A);
void modifylevel(struct pokemon * A, int lvl);
void attack(struct pokemon * A, char *attack);
