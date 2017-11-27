#include <iostream>
#include <vector>
#include"modele.h"

using namespace std;

int main()
{
	string com;
	bool b;
	int score;

    Plateau p;
	p = plateauInitial();
		cout<<dessine(p);

    int d;
	do {
		cout<<"Score : "<<score<<endl;
		cout<<"Entrez une commande: ";
		cin>>com;
		while (com!="b" && com!="g" && com!="d" && com!="h") {
		cout<<"Entrez une commande: ";
		cin>>com;
		}
		if ( com=="b")
		d=BAS;
		else if (com=="g")
		d=GAUCHE;
		else if (com=="d")
		d=DROITE;
		else if (com=="h")
		d=HAUT;



		p = deplacement(p,d);
		cout<<dessine(p);
		b=estTermine(p);

	} while(b==false );

	if ( estGagnant(p) ) {
		cout<<"Bravo! vous avez réussi le défi !!\nAppuyez sur M pour revenir au menu.\n";
	} else {
		cout<<"Jeu terminé! dommage, vous aurez plus de chance la prochaine fois.\nAppuyez sur M pour revenir au menu.\n";
	}
}
