#include<iostream>
using namespace std;
int main ()
{
    int n=5;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=(2*i-1);k>=1;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}