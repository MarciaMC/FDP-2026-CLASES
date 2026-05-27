#include <iostream>
using namespace std;
int main (){
    int numero;
    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    for(int i=1;i<=numero; i++) {
        if(numero%i==0) {
            cout<<i<<endl;
        }
    }
    return0;
}