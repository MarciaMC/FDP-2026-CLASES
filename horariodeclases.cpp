#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "Ingrese un numero del 1 al 5 para el dia:" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;

    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Lunes:" << endl;
            cout << "Matematica" << endl;
            cout << "Ingles" << endl;
            break;

        case 2:
            cout << "Martes:" << endl;
            cout << "Programacion" << endl;
            cout << "Fisica" << endl;
            break;

        case 3:
            cout << "Miercoles:" << endl;
            cout << "Quimica" << endl;
            cout << "Historia" << endl;
            break;

        case 4:
            cout << "Jueves:" << endl;
            cout << "Lenguaje" << endl;
            cout << "Educacion Fisica" << endl;
            break;

        case 5:
            cout << "Viernes:" << endl;
            cout << "Arte" << endl;
            cout << "Computacion" << endl;
            break;

        default:
            cout << "Dia no valido" << endl;
    }

    return 0;
}