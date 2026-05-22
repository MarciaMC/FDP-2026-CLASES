#include <iostream>
using namespace std;
int main (){
   int numero, suma=0;
   cout<<"digite un numero natural"<<endl;
   cin>>numero;
   for(int i=1; i<=numero; i++)
   { suma= suma + i;}
    cout<<suma<<endl;
    return 0;
}