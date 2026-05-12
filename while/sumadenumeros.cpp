#include <iostream>
using namespace std;
int main (){
    int numero = 1, suma = 0;
    while(numero !=0) {
        cout<<"escriba un numero"<<endl;
        cin>>numero;
        suma = suma + numero;
    }
    cout<<"suma total:" <<suma<<endl;
    return 0;
}