#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) a[i]=i+1;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<a[(i+j)%n]<<" ";
        }
        cout<<endl;
    }
}