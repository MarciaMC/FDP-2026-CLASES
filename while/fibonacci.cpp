#include <iostream>
using namespace std;
int main (){
    int anterior = 0;
    int actual = 1;
    int nuevo;
    int n;
    cout<<"digite un numero"<<endl;
    cin>>n;
    int contador = 0;
    while(contador < n) {
    cout << actual <<endl;
 nuevo = anterior + actual;
 anterior = actual;
 actual = nuevo; 
contador++;}
    return 0;
}