#include <iostream>
using namespace std;
int main () {
    float peso;
    int cobro, billetera=500;

    cout<< "Bienvenido, podría ingresar el valor del peso del paquete, porfavor? <<endl;
    cin>>peso;

    if(peso>0 && peso <= 5){
    cobro=billetera-5;

    cout<< "su cobro de 5$ se realizó correctamente, su nuevo saldo es de :"<< cobro << endl;
    } 

    else if (peso>= 6 && peso <= 10){

    cobro=billetera-10;
    cout<< "su cobro de $10 se realizó correctamente, su nuevo saldo es de: " << cobro <<endl;
    }

    else if(peso > 10){
    
    cobro=billetera-15;
    cout<< "su cobro de $15 se realizó correctamente, su nuevo saldo es de: " << cobro <<endl;
    }
    else {
    cout<<"Datos incorrectos" << endl;
    }
return 0;
}