#include <iostream>
#include <vector>
#include"modele.h"
#include<curses.h>
using namespace std;
int score;
int main()
{
    score=0;
    Plateau p;
	p = plateauInitial();
    int k;
    initscr();
    noecho();
    raw();
    keypad(stdscr,TRUE);

    attron(A_BLINK);//La fonction le met en gras.
            mvprintw(0,0,"2048  par J.TOGUEM et L.BENALI\n");

    while(1){
            if ( estGagnant(p) ) {
		mvprintw(1,0,"Bravo! vous avez r�ussi le d�fi !!");
		getch();
		refresh();
		return 0;
	}
	if(estTermine(p)){
        mvprintw(1,0,"Jeu termin�! dommage, vous aurez plus de chance la prochaine fois");
		getch();
		refresh();
		return 0;
	}

            mvprintw(1,0,"SCORE: %d",score);
            attron(A_STANDOUT);//La fonction le met en gras.
        attron(A_BOLD);//La fonction surligne

        mvprintw(2,0, dessine(p).c_str());
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
		cout<<"Bravo! vous avez r�ussi le d�fi !!\n";
	} else {
		cout<<"Jeu termin�! dommage, vous aurez plus de chance la prochaine fois.\n";
	}*/
	return 0;

}
