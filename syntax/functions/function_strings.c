#include <iostream>

using namespace std;

int main()
{

    string sentence = "TAU is the university I am currently attending.";

    cout << "\nLets use a find function to locate the postion of the word the: " << sentence.find("the",0) << endl;
    cout << "\nLets use substring function find the letter U: " << sentence.find("U",0) << endl;
    
    string university;
    university = sentence.substr((sentence.find("TAU",0),2));
    cout << university;

    return 0;
}
