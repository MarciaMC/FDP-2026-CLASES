#include <iostream>
using namespace std;
int main()
{
    int usuario, adivina = 30, intentos = 0;
    cout << "adivine el numero entre 1 y 50" << endl;
    cin >> usuario;
    while (intentos < 5)
    {
        if (usuario == adivina)
        {
            cout << "felicidades! adivinaste" << endl;
        }
        else
        {
            cout << "intentalo de nuevo" << endl;
            intentos++;
            cout << "ingrese otro numero" << endl;
            cin >> usuario;
        }
    }
    return 0;
}