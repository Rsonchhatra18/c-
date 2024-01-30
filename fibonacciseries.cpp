#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cout<<"Enter no of terms : ";
    cin>>n;
    cout<<"0"<<""<<"1";
    a=0,b=1;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c;
    }
}