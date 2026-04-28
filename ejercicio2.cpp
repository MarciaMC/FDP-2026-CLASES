#include <iostream>
using namespace std;
int main () 
{
    int y, x;

    cout << "Please enter a number:" << endl;
    cin >> y;
// Calcula x = y^y
    x = pow(y, y);
    // Determine si x es par o impar
    if (x % 2== 0)
    {
        cout << "The number: " << x << " is even. " << endl;
    }
    else
    {
        cout << "The number: " << x << " is even. " << endl;
    }  
    return 0;
}
