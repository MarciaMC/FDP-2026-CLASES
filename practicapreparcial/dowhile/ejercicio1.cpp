#include <iostream>
#include <string>
using namespace std;
int main()
{
    string contrasena;
    int contador = 0;
    cout << "ingrese una contrasena" << endl;
    cin >> contrasena;
    while (contrasena.length()<8)
    {
        cout << "ingrese una contrasena" << endl;
        cin >> contrasena;
        contador++;
    }
        cout<<"contrasena correcta"<<endl;
    return 0;
}