#ifndef FONCTIONS_H
#define FONCTIONS_H


#include <math.h>
#include <corecrt_math_defines.h>



double au_carre(unsigned nombre);
void carre(void);
void rectangle(void);
void triangle(void);
void cercle(void);


extern float* ptrGbl;	//sert � indiquer qu'un pointeur globale existe d�j� dans un autre fichier et que il doit reprendre ce m�me pointeur ici et donc pointer sur la m�me variable qui est resultat

#endif