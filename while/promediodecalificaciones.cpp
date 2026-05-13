#include <iostream>
using namespace std;
int main () {
    int calificacion, contador = 0;
    double promedio, suma = 0;
    cout<<"digite su calificacion"<<endl;
    cin>>calificacion;
    while (calificacion >=0) {
        suma = suma + calificacion;
        contador++;
        cout<<"digite su calificacion"<<endl;
    cin>>calificacion; }
     promedio= suma/contador;
     cout << promedio << endl;
    
    return 0;
}