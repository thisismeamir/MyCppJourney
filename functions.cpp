
#include <iostream>
#include <cmath>


using namespace std;

void myfunction(string a)
{
    cout << "Hello " << a <<endl;
}
int cuber(int num);

int functions()
{
    int cubed, userin;
    cout << "Give me a number: ";
    cin >> userin;

    // Functions
    // Int main() is a function. the purpose is that when we run the program this function executes:

    // My function gets a parameter :D
    myfunction("Amir");


    // Another function but this time it returns simething
    cubed = cuber(userin);
    cout << "Your cubed is: " << cubed << endl;

    return 0;
}

int cuber(int num)
{
    return num*num*num;
}
