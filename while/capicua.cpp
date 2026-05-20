#include <iostream>
using namespace std;
int main (){
    int numerousuario, original, numeroinvertido=0, ultimodigito; //el original sirve para guardar el numero antes de destruirlo
    cout<< "ingrese un numero"<<endl;
    cin>>numerousuario;
    original = numerousuario; //copia del numero
    while(numerousuario>0) {
       ultimodigito= numerousuario%10;
       numeroinvertido= numeroinvertido * 10 + ultimodigito;
       numerousuario = numerousuario / 10;
    } if(original==numeroinvertido) {
        cout<<"es capicua"<<endl;
    } else { cout<<"no es capicua"<<endl;}
    return 0;
}
//%10 saca el ultimo digito
//*10 mueve espacios para agregar nuevo digito
// /10 quita el ultimo digito
//al multiplicar *10 mueve los numeros un espacio a la izquierda ej: si tengo 3 --> 3 / 10=30 
//y deja espacio para agregar otro digito, que seria la suma del ultimo digito.