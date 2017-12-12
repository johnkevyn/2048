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
    noecho();//Fonction qui permet de ne pas afficher ce qu'on écrit.
    raw();//Fonction qui permet de pas avoir besoin d'appuyer sur Enter pour que l'ordinateur exécute la commande demandé
    keypad(stdscr,TRUE);//Fonction qui permet de pouvoir utiliser les flèches dirrectionel.

   attron(A_BLINK);//La fonction le met en gras.
            mvprintw(0,0,"2048  par J.TOGUEM et L.BENALI\n");

    while(1){
            if ( estGagnant(p) ) {
		mvprintw(1,0,"Bravo! vous avez réussi le défi !!");
		getch();
		refresh();
		return 0;
	}
	if(estTermine(p)){
        mvprintw(1,0,"Jeu terminé! dommage, vous aurez plus de chance la prochaine fois");
		getch();//Fonction qui permet de lire un caractère entré par l'utilisateur
		refresh();//Fonction qui permet de rafrachir ce qui a affiché.
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
		cout<<"Bravo! vous avez réussi le défi !!\n";
	} else {
		cout<<"Jeu terminé! dommage, vous aurez plus de chance la prochaine fois.\n";
	}*/
	return 0;

}
