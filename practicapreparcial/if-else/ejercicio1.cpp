#include <iostream>
using namespace std;
int main()
{ int horas, dias, horastotales, horasextra2;
    double horasextra=1.5, pagoporhora=1.68;
    cout<<"ingrese la cantidad de horas que trabaja al dia"<<endl;
    cin>>horas;
    cout<<"ingrese la cantidad de dias que trabaja a la semana"<<endl;
    cin>>dias;
    horastotales= horas*dias;
    horasextra2=(horastotales-40);
    if(horastotales<=40) {
        cout<<"su salario semanal es de:"<<(horas*pagoporhora)*dias<<endl;
    } else if(horastotales>=40) {
        cout<<"su salario semanal es de:"<<(40*pagoporhora)+(horasextra2*1.5*pagoporhora)<<endl;
    } else {cout<<"error"<<endl;
    return 0;
} }