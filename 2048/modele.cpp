#include"modele.h"
#include<stdlib.h>
#include<iostream>
#include<string>
#include<sstream>
#include <time.h>
//Renvoi un plateau
Plateau plateauVide()
{
    Plateau p;
    return p;
}

Plateau plateauInitial()
{
    srand (time(NULL));
    Plateau p (4);
    for(int i=0; i<p.size(); i++)
    {
        p[i]=vector<int> (4);
    }
    int randomLigne=rand()%(3-0 + 0) + 0;

    int randomColonne=rand()%(3-0 + 0) + 0;
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
    for(int i=0; i<g.size(); i++)
    {

        for(int j=0; j<g[i].size(); j++)
        {
            if(g[i][j]>=1 and g[i][j]<10)
            {
                std::ostringstream stream;
                stream << g[i][j];
                tableauDessine=tableauDessine+"*  "+stream.str()+"  ";
            }
            else
            {
                tableauDessine=tableauDessine+"*     ";
            }

        }
        tableauDessine=tableauDessine+"*\n";
        tableauDessine=tableauDessine+"*************************\n";
    }
    return tableauDessine;

}

bool estGagnant(Plateau plateau)
{
    for(int i=0; i<plateau.size(); i++)
    {
        for(int j=0; j<plateau[i].size(); j++)
        {
            if(plateau[i][j]==2048)
            {
                return true;
            }
        }
    }

    return false;
}

Plateau deplacementGauche(Plateau plateau)
{
    for(int i=0; i<plateau.size(); i++)
    {
        for(int j=0; j<plateau[i].size(); j++)
        {
            if(plateau[i][j]==0)
            {
                for(int k=j; k<plateau[i].size(); k++)
                {
                    if(plateau[i][k]!=0)
                    {
                        plateau[i][j]=plateau[i][k];
                        plateau[i][k]=0;
                    }

                }

            }
        }

    }

    return plateau;

}

