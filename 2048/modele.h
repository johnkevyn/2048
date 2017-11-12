#ifndef MODELE_H_INCLUDED
#define MODELE_H_INCLUDED

const int GAUCHE = 7, DROITE = 4, HAUT = 8, BAS = 2;
typedef vector<vector<int>> Plateau;
Plateau plateauVide();
Plateau plateauInitial();
Plateau deplacementGauche(Plateau plateau);
Plateau deplacementDroite(Plateau plateau);
Plateau deplacementHaut(Plateau plateau);
Plateau deplacementBas(Plateau plateau);
Plateau deplacement(Plateau plateau, int direction);
string dessine(Plateau g);
bool estTermine(Plateau plateau);
bool estGagnant(Plateau plateau);
int score(Plateau plateau);


#endif // MODELE_H_INCLUDED
