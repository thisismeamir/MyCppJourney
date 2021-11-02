#include <iostream>
#include <cmath>

int power(int n1, int n2){
    int result;
    int nu1= n1;
    for (int i = 0; i < n2; i++){
        n1 = n1 * nu1;
    }


    return n1;
}

using namespace std;

int powerfunc()
{
    cout << power(2,4);

    return 0;
}


