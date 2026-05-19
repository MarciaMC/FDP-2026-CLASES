#include <iostream>
using namespace std;
int main (){
    int opcion = 0;
    while(opcion != -1)
    {
        cout<<"menu"<<endl;
        cout<<"1. saludar"<<endl;
        cout<<"2. mensaje"<<endl;
        cout<<"3. salir"<<endl;
        cin>>opcion;
        if(opcion ==1){
            cout<<"Hola!"<<endl; }
            else if(opcion == 2){
                cout<<"como estas?"<<endl; }
                else if(opcion ==-1){
                    cout<<"saliendo del programa"<<endl;
                } else { cout<<"opcion no valida"<<endl;}


            }
    
    

    return 0;}