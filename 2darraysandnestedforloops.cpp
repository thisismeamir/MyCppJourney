
#include <iostream>
#include <cmath>


using namespace std;

int arannes()
{
    // 2d arrays and nested loops
    int numbergrid[3][2]{
        {3,1},
        {4,4},
        {5,7}
    };
    cout << numbergrid[2][1];


    //nested for loops
    for(int i =0; i < 3;i++){
        for(int j = 0; j<2;j++){
            cout <<numbergrid[i][j]<<endl;
        }
    }

    return 0;
}

