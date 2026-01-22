#include <iostream>
using namespace std;

int main() {

    int x = 10;

    // Selection: IF–ELSE
    if (x > 0)
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;

    // Selection: SWITCH
    int choice = 2;
    switch (choice)
    {
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        default: cout << "Invalid" << endl;
    }

    // Iteration: FOR loop
    for (int i = 1; i <= 3; i++)
        cout << i << endl;

    // Iteration: WHILE loop
    int n = 1;
    while (n <= 3)
    {
        cout << n << endl;
        n++;
    }

    return 0;
}
