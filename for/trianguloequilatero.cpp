#include <iostream>
using namespace std;
int main (){
    for(int i=1; i<=6; i++) {  
        for(int w=6; w>i; w--)
    {
    cout<<" "; } 
        for(int v=1; v<=(2*i)-1; v++) {
            cout<<"*";
    }
    cout<<endl; }

    return 0; }
