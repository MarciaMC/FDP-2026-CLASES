#include <iostream>
using namespace std;
int main()
{
    int mes, dia;
    string zodiaco;
    cout << "digite un mes usando numeros del 1 al 12" << endl;
    cin >> mes;
    cout << "digite su dia de nacimiento" << endl;
    cin >> dia;
    switch (mes)
    {
    case 1:
        if (dia >= 1 && dia <= 20)
        {
            cout << "su signo es capricornio" << endl;
        }
        else if (dia >= 21 && dia <= 31)
        {
            cout << "su signo es acuario" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
        break;
    case 2:
        if (dia >= 1 && dia <= 19)
        {
            cout << "su signo es acuario" << endl;
        }
        else if (dia >= 20 && dia <= 28)
        {
            cout << "su signo es piscis" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
        break;
    case 3:
        if (dia >= 1 && dia <= 20)
        {
            cout << "su signo es piscis" << endl;
        }
        else if (dia >= 21 && dia <= 31)
        {
            cout << "su signo es aries" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
        break;
    case 4:
        if (dia >= 1 && dia <= 20)
        {
            cout << "su signo es aries" << endl;
        }
        else if (dia >= 21 && dia <= 30)
        {
            cout << "su signo es tauro" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
    case 5:
        if (dia >= 1 && dia <= 20)
        {
            cout << "su signo es tauro" << endl;
        }
        else if (dia >= 21 && dia <= 31)
        {
            cout << "su signo es geminis" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
    case 6:
        if (dia >= 1 && dia <= 20)
        {
            cout << "su signo es geminis" << endl;
        }
        else if (dia >= 21 && dia <= 30)
        {
            cout << "su signo es cancer" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
    case 7:
        if (dia >= 1 && dia <= 22)
        {
            cout << "su signo es cancer" << endl;
        }
        else if (dia >= 23 && dia <= 31)
        {
            cout << "su signo es leo" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
    case 8:
        if (dia >= 1 && dia <= 22)
        {
            cout << "su signo es leo" << endl;
        }
        else if (dia >= 23 && dia <= 31)
        {
            cout << "su signo es virgo" << endl;
        }
        else
        {
            cout << "ese dia no existe" << endl;
        }
    }
    return 0;
}