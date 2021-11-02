#include <iostream>
#include <cmath>


using namespace std;

int pointers()
{
    // pointers
    int age = 19;
    double gpa = 3.3;
    string name= "Mike";

    cout << &age;

    // storing memory addresses
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    // memory address
    cout << pAge <<endl;
    //dereferencing

    cout << *pAge <<endl;
    return 0;
}


