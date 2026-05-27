#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<" ";
        for(int j=1;j<=i;j++) {
            cout<<"#";
        }
       cout<<endl; 
    }
    return 0;
}