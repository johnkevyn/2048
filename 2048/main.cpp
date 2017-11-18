#include <iostream>
#include <vector>
#include"modele.h"

using namespace std;

int main()
{

    Plateau t;
    t=plateauInitial();

    cout<<dessine(t);


    return 0;

}
