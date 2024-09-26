#include "fonctions.h"





double au_carre(unsigned nombre)
{
    return nombre * nombre;
}

void carre(void)
{
    unsigned Longueur = 0;
    scanf_s("%d", &Longueur);
    *ptrGbl = au_carre(Longueur);
}

void rectangle(void)
{
    unsigned Longueur = 0, Hauteur = 0;
    scanf_s("%d , %d", &Longueur, &Hauteur);
    *ptrGbl = Longueur * Hauteur;
}

void triangle(void)
{
    unsigned Longueur = 0, Hauteur = 0;
    scanf_s("%d , %d", &Longueur, &Hauteur);
    *ptrGbl = (Longueur * Hauteur)/2;
}

void cercle(void)
{
    unsigned Rayon = 0;
    scanf_s("%d", &Rayon);
    *ptrGbl = M_PI * au_carre(Rayon);
}