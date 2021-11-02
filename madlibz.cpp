
#include <iostream>
#include <cmath>


using namespace std;

int madlibz()
{
    //Madlibz
    string color, pnoun, cele;

    cout << "enter a color: ";
    getline(cin,color);

    cout << "enter a plural noun: ";
    getline(cin,pnoun);

    cout << "enter a celebrity: ";
    getline(cin,cele);


    cout << "Roses are " << color << endl;
    cout << pnoun << " are blue" <<endl;
    cout << "I love " << cele <<endl;



    return 0;
}
