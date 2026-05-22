#include <iostream>
using namespace std;
int main () {
    int numero, invertido, original;
    cout<<"digite un numero"<<endl;
    cin>>numero;
    for(; numero>0; numero= numero/10) {
        cout<<numero%10;
    }
    return 0;
}