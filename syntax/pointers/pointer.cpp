#include <iostream>
#include <string>
using namespace std;

int main() {
    string room = "bathroom";
    string* ptr = &room;

    cout << room << "\n";
    cout << &room << "\n";
    cout << ptr << "\n";

    return 0;
}

