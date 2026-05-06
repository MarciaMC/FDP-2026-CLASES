#include <iostream>
using namespace std;

int main()
{
    int mes, dia;

    cout << "Digite un mes usando numeros del 1 al 12" << endl;
    cin >> mes;
    cout << "Digite su dia de nacimiento" << endl;
    cin >> dia;

    switch (mes)
    {
    case 1:
        if (dia >= 1 && dia <= 20)
            cout << "su signo es capricornio" << endl;
        else if (dia <= 31)
            cout << "su signo es acuario" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 2:
        if (dia >= 1 && dia <= 19)
            cout << "su signo es acuario" << endl;
        else if (dia <= 28)
            cout << "su signo es piscis" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 3:
        if (dia >= 1 && dia <= 20)
            cout << "su signo es piscis" << endl;
        else if (dia <= 31)
            cout << "su signo es aries" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 4:
        if (dia >= 1 && dia <= 20)
            cout << "su signo es aries" << endl;
        else if (dia <= 30)
            cout << "su signo es tauro" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 5:
        if (dia >= 1 && dia <= 20)
            cout << "su signo es tauro" << endl;
        else if (dia <= 31)
            cout << "su signo es geminis" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 6:
        if (dia >= 1 && dia <= 20)
            cout << "su signo es geminis" << endl;
        else if (dia <= 30)
            cout << "su signo es cancer" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 7:
        if (dia >= 1 && dia <= 22)
            cout << "su signo es cancer" << endl;
        else if (dia <= 31)
            cout << "su signo es leo" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 8:
        if (dia >= 1 && dia <= 22)
            cout << "su signo es leo" << endl;
        else if (dia <= 31)
            cout << "su signo es virgo" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 9:
        if (dia >= 1 && dia <= 22)
            cout << "su signo es virgo" << endl;
        else if (dia <= 30)
            cout << "su signo es libra" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 10:
        if (dia >= 1 && dia <= 22)
            cout << "su signo es libra" << endl;
        else if (dia <= 31)
            cout << "su signo es escorpio" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 11:
        if (dia >= 1 && dia <= 21)
            cout << "su signo es escorpio" << endl;
        else if (dia <= 30)
            cout << "su signo es sagitario" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    case 12:
        if (dia >= 1 && dia <= 21)
            cout << "su signo es sagitario" << endl;
        else if (dia <= 31)
            cout << "su signo es capricornio" << endl;
        else
            cout << "ese dia no existe" << endl;
        break;

    default:
        cout << "mes no valido" << endl;
    }

    return 0;
}