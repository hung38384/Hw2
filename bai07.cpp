#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a;
    if(a<0){
         cout<<a; exit(0);
    } else cout<<a<<" ";
    while(b>=0)
    {
        cin>>b;
        if(b!=a)
        { 
        cout<<b<<" ";
        a=b;
        }
    }
}