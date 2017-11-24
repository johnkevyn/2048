#include <iostream>
#include <vector>
#include"modele.h"

using namespace std;

int main()
{

    Plateau t;
    t=plateauInitial();

    t=deplacementGauche(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementBas(t);
     cout<<dessine(t);



    return 0;

}
