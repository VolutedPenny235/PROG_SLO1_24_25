#ifndef FONCTIONS_H
#define FONCTIONS_H


#include <math.h>
#include <corecrt_math_defines.h>



double au_carre(unsigned nombre);
void carre(void);
void rectangle(void);
void triangle(void);
void cercle(void);


extern float* ptrGbl;	//sert à indiquer qu'un pointeur globale existe déjà dans un autre fichier et que il doit reprendre ce même pointeur ici et donc pointer sur la même variable qui est resultat

#endif