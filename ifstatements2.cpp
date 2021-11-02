#include <iostream>
#include <cmath>


using namespace std;

int getmax(int n1,int n2){
    int result;
    if (n1 > n2){
        result = n1;
    }
    else if(n1==n2){
        return 0;
    }
    else {
        result = n2;
    }

    return result;

}
int ifstatements2()
{
    // Comparisons

    cout << getmax(13,41) <<endl;
    cout << getmax(41,53) <<endl;
    cout << getmax(35,23) <<endl;
    cout << getmax(24,25) <<endl;
    cout << getmax(42,62) <<endl;

    return 0;
}


