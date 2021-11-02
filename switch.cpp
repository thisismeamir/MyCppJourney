#include <iostream>
#include <cmath>


using namespace std;

string getdow(int daynum){

    string dayname;

    switch(daynum){
    case 0:
        dayname = "sunday";
        break;
    case 1:
        dayname = "monday";
        break;
    case 2:
        dayname = "tuesday";
        break;
    case 3:
        dayname = "wendsday";
        break;
    case 4:
        dayname = "thursday";
        break;
    case 5:
        dayname = "friday";
        break;
    case 6:
        dayname = "saturday";
        break;
    default:
        dayname = "invalid";
        break;


    }


    return dayname;
}

int switches()
{
    // Switch

    cout << getdow(12);
    return 0;
}

