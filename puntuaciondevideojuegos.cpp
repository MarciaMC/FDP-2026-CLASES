#include <iostream>
using namespace std;
int main()
{
    int puntaje;
    cout << "digite su puntaje de 1 a 5 estrellas" << endl;
    cin >> puntaje;
    switch (puntaje)
    {
    case 1:
        cout << "puntaje muy bajo" << endl;
        break;
    case 2:
        cout << "puntaje bajo" << endl;
        break;
    case 3:
        cout << "puntaje intermedio" << endl;
        break;
    case 4:
        cout << "puntaje alto" << endl;
        break;
    case 5:
        cout << "puntaje muy alto" << endl;
        break; 
    default:
        cout << "puntaje fuera del rango" << endl;
    }

    return 0;
}