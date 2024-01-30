#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter the number whose factorial is to be found :";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
}