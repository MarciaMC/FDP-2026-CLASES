#include <iostream>
using namespace std;
int main()
{
    int base, exponente, resultado = 1;
    cout << "digite su numero base" << endl;
    cin >> base;
    cout << "digite su numero exponente" << endl;
    cin >> exponente;
    for (int i = 0; i < exponente; i++)
    {resultado=resultado *base;}
        cout<<resultado;
    
    cout << resultado;
    return 0;
}