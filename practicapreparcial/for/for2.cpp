#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,exponente=1;
    cout<<"digite hasta que exponente quiere que llegue 2"<<endl;
    cin>>n;
    for(int exponente=1;exponente<=n;exponente++){
        cout<<"2^"<<exponente<<"="<<pow(2,exponente)<<endl;
    }
    return 0;
}