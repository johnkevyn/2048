#include"modele.h"
#include<stdlib.h>
#include<iostream>
#include<string>
//Renvoi un plateau
Plateau plateauVide()
{
    Plateau p;
    return p;
}

Plateau plateauInitial()
{
    Plateau p (4);
    for(int i=0; i<p.size(); i++)
    {
        p[i]=vector<int> (4);
    }
    int randomLigne=rand()%(4-1 + 1) + 1;

    int randomColonne=rand()%(4-1 + 1) + 1;
    int probabilite_4=rand()%(10-1 + 1) + 1;
    if(probabilite_4==4)
    {
        p[randomLigne][randomColonne]=4;
    }
    else if(probabilite_4!=4)
    {
        p[randomLigne][randomColonne]=2;

    }
    std::cout<<randomColonne<<"   "<<randomLigne<<endl;

    p[randomLigne][randomColonne]=2;



    return p;
}

string dessine(Plateau g)
{
    std::string tableauDessine;
    tableauDessine="*************************\n";
    for(int i=0; i<4; i++)
    {

        for(int j=0; j<g[i].size(); j++)
        {
            if(g[i][j]>=1 and g[i][j]<10){
                 tableauDessine=tableauDessine+"*     ";
            }
            tableauDessine=tableauDessine+"*     ";
        }
        tableauDessine=tableauDessine+"*\n";
        tableauDessine=tableauDessine+"*************************\n";
    }
    return tableauDessine;

}

