*/
#include <iostream>
#include <cmath>
using namespace std;

int main () {

float  area, pi=3.141516;
int area;

cout<<"Bienvenido a calculadora de radio "<< endl;
cout<<"Porfavor, podria ingresar el valor del radio"<<endl;
cin>>r;

area = pi*(pow(r,2));
if (area % 2 == 0){
    cout<<"el area calculada es:"<< area << "por lo tanto es par"<<endl;
}
else {
    if (area % 2 == 0){
    cout<<"el area calculada es:"<< area << "por lo tanto es impar"<<endl;
}


    return 0;
}