
#include <iostream>
#include <cmath>


using namespace std;


int ifstatement()
{

    // If statements
    bool isMale = true;
    bool isTall = true;

     //  ||  means logical or -- && means logical and!


    if (isMale && isTall)
    {
        cout << "You are a male and tall.";
    }
    else if(isMale && !isTall){

        cout << "You are a male but not tall.";
    }
    else if(!isMale && isTall){
        cout << "You are not male but tall.";

    }
    else{
        cout << "You are not male and not tall .";
    }
    return 0;
}

