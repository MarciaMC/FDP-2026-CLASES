#include <iostream>
using namespace std;
int main (){
    int numero, contador=1;
    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    do { 
        cout<<contador<<endl;
        contador=contador+2;
    } while(contador<=numero);

        return 0; 
    }