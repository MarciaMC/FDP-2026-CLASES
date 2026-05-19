#include <iostream>
using namespace std;

int main() {
  int num, suma = 0, pares = 2;
  cout<<"escriba un numero"<<endl;
  cin>>num;
  while(pares <= num) {
  suma = suma + pares;
pares = pares + 2; }
cout<< suma <<endl; 



    return 0;
}
