#include <iostream>
using namespace std;
int main (){
    int contrasena=12345687;
    int usuario;
    cout<<"ingrese la contrasena"<<endl;
    cin>>usuario;
    while(usuario != contrasena) {
        cout<<"contrasena incorrecta, intentelo de nuevo"<<endl;
        cout<<"ingrese la contraseña"<<endl;
        cin>>usuario;
        if(contrasena = contrasena){
            cout<<"contrasena correcta"<<endl;
        }
    }
    return 0;
}