#include <iostream>

using namespace std;

int main()
{

    //Printing and basic Var
    string characterName = "John";
    int characterAge;
    characterAge = 30;

    cout << "Hello world! " << characterName << endl;
    cout << "Work with me :\)" << endl;

    // Data types
    char grade = 'A';
    string phrase = "Hello, I am Amir!";
    int age = 52;
    double gpa = 2.3;
    bool yes = true;
    bool no  = false;


    // strings
    cout << "Hello \n New line!" << endl;
    string myname = "Amir";

    int length = phrase.length();
    cout << length << endl;
    cout << myname[2] << endl;
    myname[0] = 'a';
    cout << myname << endl;

    cout << myname.find("mir",0) << endl;
    cout << myname.substr(1,3) << endl;

    return 0;
}
