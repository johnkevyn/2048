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
            else if(g[i][j]>=10 and g[i][j]<100)
            {
                std::ostringstream stream;
                stream << g[i][j];
                tableauDessine=tableauDessine+"* "+stream.str()+"  ";
            }
            else if(g[i][j]>=100 and g[i][j]<1000)
            {
                std::ostringstream stream;
                stream << g[i][j];
                tableauDessine=tableauDessine+"* "+stream.str()+" ";
            }
            else if(g[i][j]>=1000 and g[i][j]<=2048)
            {
                std::ostringstream stream;
                stream << g[i][j];
                tableauDessine=tableauDessine+"*"+stream.str()+" ";
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
   srand (time(NULL));
   for(int i=0; i<plateau.size(); i++)
    {
        for(int j=0; j<plateau[i].size(); j++)
        {
            if(plateau[i][j]!=0)
            {
                for(int l=j+1; l<plateau[i].size(); l++)
                {
                    if(plateau[i][l]!=0){
                        if(plateau[i][l]==plateau[i][j])
                    {
                        plateau[i][j]=plateau[i][j]*2;
                        plateau[i][l]=0;
                    }
                    break;

                    }
                                    }
            }
        }
    }

    //Ici commence le déplacement des case.

    for(int i=0; i<plateau.size(); i++)
    {
        for(int j=0; j<plateau[i].size(); j++)
        {
            if(plateau[i][j]==0)
            {
                for(int k=j+1; k<plateau[i].size(); k++)
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

    //Ici je choisit aléatoirement une case du tableau pour vérifié si elle vaut 0
    int randomLigne=rand()%(4-0 + 0) + 0;
    int randomColone=rand()%(4-0 + 0) + 0;

    while(plateau[randomLigne][randomColone]!=0)
    {
        randomLigne=rand()%(4-0 + 0) + 0;
        randomColone=rand()%(4-0 + 0) + 0;
    }

    int probabilite_4=rand()%(10-1 + 1) + 1;
    if(probabilite_4==4)
    {
        plateau[randomLigne][randomColone]=4;
    }
    else if(probabilite_4!=4)
    {
        plateau[randomLigne][randomColone]=2;

    }

    return plateau;

}

Plateau deplacementDroite(Plateau plateau){
  srand (time(NULL));
   for(int i=0; i<plateau.size(); i++)
    {
        for(int j=plateau[i].size()-1; j>=0; j--)
        {
            if(plateau[i][j]!=0)
            {
                for(int l=j-1; l>=0; l--)
                {
                    if(plateau[i][l]!=0){
                        if(plateau[i][l]==plateau[i][j])
                    {
                        plateau[i][j]=plateau[i][j]*2;
                        plateau[i][l]=0;
                    }
                    break;
                    }
                                    }
            }
        }
    }

    //Ici commence le déplacement des case.

    for(int i=0; i<plateau.size(); i++)
    {
        for(int j=plateau[i].size()-1; j>=0; j--)
        {
            if(plateau[i][j]==0)
            {
                for(int k=j-1; k>=0; k--)
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

    //Ici je choisit aléatoirement une case du tableau pour vérifié si elle vaut 0
    int randomLigne=rand()%(4-0 + 0) + 0;
    int randomColone=rand()%(4-0 + 0) + 0;

    while(plateau[randomLigne][randomColone]!=0)
    {
        randomLigne=rand()%(4-0 + 0) + 0;
        randomColone=rand()%(4-0 + 0) + 0;
    }

    int probabilite_4=rand()%(10-1 + 1) + 1;
    if(probabilite_4==4)
    {
        plateau[randomLigne][randomColone]=4;
    }
    else if(probabilite_4!=4)
    {
        plateau[randomLigne][randomColone]=2;

    }

    return plateau;




}
Plateau deplacementHaut(Plateau plateau){

    //Debut du code pour la somme
     for(int j=0; j<plateau.size(); j++)
    {
        for(int i=0; i<plateau[j].size();  i++)
        {
            if(plateau[i][j]!=0)
            {
                for(int l=i+1; l<plateau[j].size(); l++)
                {
                    if(plateau[l][j]!=0){
                        if(plateau[l][j]==plateau[i][j])
                    {
                        plateau[i][j]=plateau[i][j]*2;
                        plateau[l][j]=0;
                    }
                    break;
                    }

                }
            }
        }
    }


    //Debut du code pour le deplacement

    for(int j=0; j<plateau.size(); j++)
    {
        for(int i=0; i<plateau[j].size(); i++)
        {
            if(plateau[i][j]==0) //c'est bon
            {
                for(int m=i; m<plateau[i].size(); m++)
                {
                    if(plateau[m][j]!=0)
                    {
                        plateau[i][j]=plateau[m][j];
                        plateau[m][j]=0;
                    }

                }

            }
        }

    }

//Ici je choisit aléatoirement une case du tableau pour vérifié si elle vaut 0
    srand (time(NULL));
    int randomLigne=rand()%(4-0 + 0) + 0;
    int randomColone=rand()%(4-0 + 0) + 0;

    while(plateau[randomLigne][randomColone]!=0)
    {
        randomLigne=rand()%(4-0 + 0) + 0;
        randomColone=rand()%(4-0 + 0) + 0;
    }

    int probabilite_4=rand()%(10-1 + 1) + 1;
    if(probabilite_4==4)
    {
        plateau[randomLigne][randomColone]=4;
    }
    else if(probabilite_4!=4)
    {
        plateau[randomLigne][randomColone]=2;

    }

    return plateau;


}

Plateau deplacementBas(Plateau plateau){
    for(int j=0; j<plateau.size(); j++)
    {
        for(int i=plateau.size()-1; i>=0;  i--)
        {
            if(plateau[i][j]!=0)
            {
                for(int l=i-1; l>=0; l--)
                {
                    if(plateau[l][j]!=0){
                       if(plateau[l][j]==plateau[i][j])
                    {
                        plateau[i][j]=plateau[i][j]*2;
                        plateau[l][j]=0;
                    }
                    break;
                    }
                                   }
            }
        }
    }
//ici commence le déplacement de déplacementBas.

    for(int j=0; j<plateau.size(); j++)
    {
        for(int i=plateau[j].size()-1; i>=0; i--)
        {
            if(plateau[i][j]==0) //c'est bon
            {
                for(int n=i-1; n>=0; n--)
                {
                    if(plateau[n][j]!=0)
                    {
                        plateau[i][j]=plateau[n][j];
                        plateau[n][j]=0;
                    }
                }
            }
        }
    }
//Ici je choisit aléatoirement une case du tableau pour vérifié si elle vaut 0
    srand (time(NULL));
    int randomLigne=rand()%(4-0 + 0) + 0;
    int randomColone=rand()%(4-0 + 0) + 0;

    while(plateau[randomLigne][randomColone]!=0)
    {
        randomLigne=rand()%(4-0 + 0) + 0;
        randomColone=rand()%(4-0 + 0) + 0;
    }

    int probabilite_4=rand()%(10-1 + 1) + 1;
    if(probabilite_4==4)
    {
        plateau[randomLigne][randomColone]=4;
    }
    else if(probabilite_4!=4)
    {
        plateau[randomLigne][randomColone]=2;

    }

    return plateau;




}

Plateau deplacement(Plateau plateau, int direction){
    if(direction==7){
        plateau=deplacementGauche(plateau);
    }
    else if(direction==4){
        plateau=deplacementDroite(plateau);
    }
    else if(direction==8){
        plateau=deplacementHaut(plateau);
    }
    else if(direction==2){
        plateau=deplacementBas(plateau);
    }

    return plateau;
}

bool estTermine(Plateau plateau){
    if(deplacementGauche(plateau)==plateau and deplacementDroite(plateau)==plateau and deplacementHaut(plateau)==plateau and deplacementBas(plateau)==plateau){
        return true;
    }
    return false;

}





