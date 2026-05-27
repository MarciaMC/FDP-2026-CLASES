#include <iostream>
using namespace std;
int main () {
    int numero, suma=0, digito;
     cout<<"ingrese un numero"<<endl;
        cin>>numero;
    do { digito = numero % 10; /*saca el ultimo digito*/
suma= suma + digito; /*va acumulando la suma*/
numero = numero/10; /*le quita el ultimo digito*/
       
    } while(numero>0);
    cout<<suma;



    return 0;
}