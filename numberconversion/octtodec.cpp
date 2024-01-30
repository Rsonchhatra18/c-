#include<iostream>
using namespace std;
int main()
{
    int ans=0,mul=1,rem,num;
    cout<<"Enter a number :";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*8;
    }
    cout<<"answer in Decimal is :"<<ans;
}