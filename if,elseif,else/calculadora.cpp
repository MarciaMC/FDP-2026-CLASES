#include <iostream>
using namespace std;
int main () {
    double num1, num2;
    char operacion;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cin >> operacion;
    if (operacion == '+') {
    cout << "Resultado: " << num1 + num2 << endl;
    }
    else if (operacion == '-') {
        cout << "Resultado: " <<num1 - num2 <<endl;
    }
    else if (operacion== '*') {
        cout << "Resultado: " <<num1 * num2 << endl;
    }
    else if (operacion == '/') {
        if (num2 != 0) {
            cout << "Resultado: " << num1 / num2 << endl;
        } else {
        cout << "Error: no se puede dividir entre 0" <<endl;
        }
    } 
    else {
    cout << "Operacion no valida" << endl;
}
return 0;
}