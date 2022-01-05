#include <iostream>
using namespace std;

int main()
{
    int num_array[] = {2, 5, 6, 22};
    cout << num_array[3];

    num_array[3] = 300;

    cout << num_array[3];
    
    return 0;
}

