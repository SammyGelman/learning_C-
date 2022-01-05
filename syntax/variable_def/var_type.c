#include <iostream>

using namespace std;

int main()
{

    char  favLetter = 'A';
    string schoolName = "TAU";
    int numStudents = 30;
    double temp = 22.4;
    bool isHappy = true;

    cout << "Lets learn to index a string.\n" << endl;
    cout << "School name: " << schoolName << " first letter in school name " << schoolName[0] << endl;
    cout << "\nLets use a find function: " << schoolName.find("U",0) << endl;
    cout << "\nLets use substring function: " << schoolName.find("U",0) << endl;

    return 0;
}
