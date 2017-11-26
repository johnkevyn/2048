#include <iostream>
#include <vector>
#include"modele.h"

using namespace std;

int main()
{
    int direction;



    Plateau t;
    t=plateauInitial();
     t=deplacementGauche(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementGauche(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementGauche(t);
     cout<<dessine(t);
    t=deplacementGauche(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementGauche(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementGauche(t);
     cout<<dessine(t);
cout<<"Et ensuite"<<endl;
      t=deplacementBas(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementBas(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementBas(t);
     cout<<dessine(t);
    t=deplacementBas(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementBas(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementBas(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
           t=deplacementBas(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementHaut(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementHaut(t);
     cout<<dessine(t);
    t=deplacementHaut(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementHaut(t);
     cout<<dessine(t);
     cout<<"Et ensuite"<<endl;
     t=deplacementHaut(t);
     cout<<dessine(t);







return 0;

}
