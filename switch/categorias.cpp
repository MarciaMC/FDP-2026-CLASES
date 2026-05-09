#include <iostream>
using namespace std;
int main (){
    int edad, categoria;
    cout<<"ingrese su edad"<<endl;
    cin>>edad;
    if(edad >=0 && edad <=10) {
    categoria = 1;
}
if(edad >10 && edad<=13) {
    categoria = 2;
}
if(edad >13 && edad<=17) {
    categoria = 3;
}
if(edad >=18 && edad <=99) {
    categoria = 4;
} 
if(edad >100) {
    categoria = 5;
}
switch(categoria) {
    case 1:
    cout<<"G: para todo publico"<<endl;
    break;
    case 2: 
    cout<<"PG: con supervision de un adulto"<<endl;
    break;
    case 3:
    cout<<"PG-13: puede contener violencia o temas fuertes"<<endl;
    break;
    case 4: 
    cout<<"R: para +18"<<endl;
    break;
    default:
    cout<<"fuera del rango de edades"<<endl;
}


    return 0;
}