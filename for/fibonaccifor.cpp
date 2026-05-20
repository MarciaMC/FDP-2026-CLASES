#include <iostream>
using namespace std;
int main () {
    int anterior = 0, actual = 1, nuevo, n, contador = 0;
    cout<<"digite un numero"<<endl;
    cin>>n;
    for(int i= 0; i<n; i++) {
    cout<<actual<<endl;
    nuevo = anterior + actual;
    anterior = actual;
    actual = nuevo;
    }
    return 0;
}