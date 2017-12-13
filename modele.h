#ifndef MODELE_H_INCLUDED
#define MODELE_H_INCLUDED
#include<vector>
#include<string>
using namespace std;

const int GAUCHE = 7, DROITE = 4, HAUT = 8, BAS = 2;
typedef vector<vector<int>> Plateau;
Plateau plateauVide(); //Fait
Plateau plateauInitial(); //Fait
Plateau deplacementGauche(Plateau plateau);//Fait
Plateau deplacementDroite(Plateau plateau);//Fait  
Plateau deplacementHaut(Plateau plateau);//Fait
Plateau deplacementBas(Plateau plateau);//Fait
Plateau deplacement(Plateau plateau, int direction);//Fait
string dessine(Plateau g);//Fait
bool estTermine(Plateau plateau);//Fait
bool estGagnant(Plateau plateau);  //Fait
//int score(Plateau plateau);
Plateau alea(Plateau plateau); //Fait
void testsFonctions();//Fait

#endif // MODELE_H_INCLUDED