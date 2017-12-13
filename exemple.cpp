#include <iostream>
#include <vector>
#include"modele.h"
//#include<curses.h>
using namespace std;

int main()
{
/*

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
            attron(A_STANDOUT);//La fonction le met en gras.
        attron(A_BOLD);//La fonction surligne

        mvprintw(1,0, dessine(p).c_str());
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
        else if(k==KEY_BACKSPACE){
            endwin();
        }

    }

    endwin();
*/

    //////////////////////////////////////
    //////////////////////////////////////
    //////////////////////////////////////
const char *const red1= "\033[0;30;41m";
const char *const basic1="\033[0m";
	string com;
	bool b;
	
	cout<<"\033[2J\033[1;1H";
	cout<<red1<<"Bienvenu dans le jeu 2048  par L.BENALI et J.TOGUEM \n"<<basic1<<endl;
    Plateau p;
	p = plateauInitial();
		cout<<dessine(p)<<endl;
    int d;
	cout<<red1<<"Intructions:"<<basic1<< "utilisez les boutons z:haut, q:gauche, s:bas,  d:droite afin de deplacer les tuiles"<<endl;
	cout<<"Le but du jeu est de faire une tuile '2048'. Bonne chance."<<endl;
	
	testsFonctions();  //appelle la fonction des tests
	
	do {
		cout<<"Entrez une commande: ";
		cin>>com;
		while (com!="s" && com!="q" && com!="d" && com!="z") {
		cout<<"Entrez une commande: ";
		cin>>com;
		}
		cout<<"\033[2J\033[1;1H";
		if ( com=="s")
		d=2;
		else if (com=="q")
		d=7;
		else if (com=="d")
		d=4;
		else if (com=="z")
		d=8;
		p = deplacement(p,d);
		cout<<dessine(p);
		cout<<"          Copyright © LB&JKT"<<endl;
		b=estTermine(p);
	} while(b==false );
	if ( estGagnant(p) ) {
		cout<<"Bravo! vous avez réussi le défi !!\n";
	} else {
		cout<<"Jeu terminé! dommage, vous aurez plus de chance la prochaine fois.\n";
	}
	return 0;

}
