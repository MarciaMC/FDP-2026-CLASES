#include <iostream>
using namespace std;
int main () {
    int usuario;
    cout<<"ingrese un numero del 1 al 5 para saber su tipo de usuario"<<endl;
    cin>>usuario;
    switch(usuario){
        case 1: cout<<"admin"<<endl;
        break;
        case 2: cout<<"editor"<<endl;
        break;
        case 3: cout<<"viewer"<<endl;
        break;
        case 4: cout<<"visitor"<<endl;
        break;
        case 5: cout<<"employee"<<endl;
        break;
    }
    return 0;
}