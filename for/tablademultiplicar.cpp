#include <iostream>
using namespace std;
int main () {
    int numero, multiplicacion=0;
    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    for(int i=1; i<=10; i++ ) {
       multiplicacion=numero*i;
       cout<<multiplicacion<<endl;

    }

    return 0;
}