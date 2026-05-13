#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<"escriba un numero"<<endl;
    cin>>num;
    while (num>0) {
        cout << num % 2 << endl;
        num = num / 2;
    }
    return 0;
}