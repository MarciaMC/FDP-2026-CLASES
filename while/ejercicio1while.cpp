#include <iostream>
using namespace std;
int main () {
    int contador;
    cout<<"ingrese un numero para iniciar el contador"<<endl;
    cin>>contador; // 1
    // Ciclo while
    while (contador <=5)
    {
        cout<<"Contador en while: " << contador <<endl;
        contador++; // Incrementa el contador
    }
    cout<<"salio del bucle";
    return 0;
}