#include <iostream>
using namespace std;
int main (){
    int estacion;
    cout<<"digite un numero del 1 al 4 para mostrar una estacion del año"<<endl;
cin>>estacion;
switch(estacion) {
    case 1:{cout<<"es primavera"<<endl;}
    break;
    case 2:{cout<<"es verano"<<endl;}
    break;
    case 3:{cout<<"es otoño"<<endl;}
    break;
    case 4: {cout<<"es invierno"<<endl;}
    break;
}
    return 0;
}