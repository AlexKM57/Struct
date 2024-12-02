#include <stdio.h>
#include <string.h>

#include "struct.h"

int main(){

	Booleen start = ENCOUR;
	printf("%d\n",start);
	   
	joueur p1 = {"", 0, 0};

	create_player(&p1);

	printf("le joueur 1 est  %s avec %d hp et %d mp\n", p1.name, p1.hp, p1.mp);

    return 0;
}

void create_player (joueur *p1)
{
	strcpy(p1->name, "AlexKM57");
	p1->hp = 100;
	p1->mp = 100;
} 

/*
dans les structure pour le pointeur d'une variable on utilise le fleche (->)
EX: p1->hp designe l'adresse le hp du joueur 1
*/