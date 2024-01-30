#include<iostream>
using namespace std;
int main()
{
    int ans=0,mul=1,rem,num;
    cout<<"Enter a number :";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<"answer in binary is :"<<ans;
}