
#ifndef __HAUT_H__
#define __HAUT_H__

//le typedef permet de transformer une structure ou une ennumeration en type
typedef struct player
{
	signed char name[256];
	int hp;
	int mp;
}joueur;

typedef enum booleen
{
	NON,//0
	OUI,//1
	ENCOUR//2
}Booleen;

void create_player (joueur *p1);

#endif
