#include <iostream>
#include <cmath>

using namespace std;

int inputs()
{




    // User Inputs
    int age1;
    cout << "Enter your age: ";
    cin  >> age1;
    cout << "You are " << age1 << " Years old" << endl;

    // Getting a string:
    string name1;
    cout << "Give me your name" << endl;
    getline(cin, name1);
    cout << "Hello " << name1 << endl;

    return 0;

}
