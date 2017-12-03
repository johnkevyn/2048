#include <iostream>
#include <vector>
#include"modele.h"
#include<curses.h>
using namespace std;

int main()
{


    Plateau p;
	p = plateauInitial();

    int k;
    initscr();
    noecho();
    raw();
    keypad(stdscr,TRUE);


    while(1){
        mvprintw(0,0, dessine(p).c_str());
        refresh();
        k=getch();

        if(k==KEY_LEFT){
            p=deplacement(p, 7);
        }
        else if(k==KEY_RIGHT){
            p=deplacement(p, 4);

        }
        else if(k==KEY_DOWN){
            p=deplacement(p, 2);
        }
        else if(k==KEY_UP){
            p=deplacement(p, 8);
        }
    }

    endwin();


    //////////////////////////////////////
    //////////////////////////////////////
    //////////////////////////////////////

/*
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
		cout<<"Bravo! vous avez réussi le défi !!\n";
	} else {
		cout<<"Jeu terminé! dommage, vous aurez plus de chance la prochaine fois.\n";
	}*/
	return 0;

}
