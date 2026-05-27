#include <iostream>
using namespace std;
int main() {
    int edad;
    cout<<"ingrese su edad"<<endl;
    cin>>edad;
    if(edad>=1 && edad<=17) {
        cout<<"menor de edad"<<endl;
    } else if(edad>=18 && edad<=59) {
        cout<<"adulto"<<endl;
    } else if(edad>60){
        cout<<"adulto mayor"<<endl;
    } else { cout<<"edad invalida"<<endl;}
    return 0;
}