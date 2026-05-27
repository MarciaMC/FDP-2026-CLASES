#include <iostream>
using namespace std;
int main (){
    int numero, divisor=1;{
        cout<<"digite un numero"<<endl;
        cin>>numero;
        while(divisor<=numero) {
            if(numero % divisor ==0) {
                cout<<divisor<<endl;
             } divisor++;
        }
    }
    return 0;
}