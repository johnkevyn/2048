#include"modele.h"

//Renvoi un plateau
Plateau plateauVide(){
    Plateau p;
    return p;
}

Plateau plateauInitial(){
    Plateau p (4);
    for(int i=0; i<p.size(); i++){
        p[i]=vector<int> (4);
    }
    int randomLigne=rand()%(4-1 + 1) + 1;

        int randomColonne=rand()%(4-1 + 1) + 1;
        p[randomLigne][randomColonne]=2;


    return p;
}
