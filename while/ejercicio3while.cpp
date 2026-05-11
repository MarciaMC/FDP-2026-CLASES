#include <iostream>
using namespace std;

int main()
{
    int numeroSecreto = 42; // El numero que debe adivinar el usuario
    int intento;

    cout << "¡Adivina el numero secreto!" << endl;
    cout << "Ingresa un numero entre 1 y 100: ";

    // Ciclo while para continuar hasta que el usuario adivine correctamente
    cin >> intento;
    while (intento != numeroSecreto)
    {
        if (intento > numeroSecreto)
        {
            cout << "El numero es demasiado alto. Intentalo de nuevo: ";
        }
        else
        {
            cout << "El numero es demasiado bajo. Intentalo de nuevo: ";
        }
        cin >> intento; // Leer un nuevo intento
    }

    cout << "¡Felicidades! Has adivinado el numero secreto." << endl;
    return 0;
}