#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;
    if(isMale && isTall) {
        cout << "You are a tall male.";
    } else if(isMale || isTall) {
        cout << "You are either tall or a male";
    } else {
        cout << "You are not male and not tall";
    }
    
    return 0;
}
