#include<iostream>
using namespace std;
int main()
{
    int ele,n,arr[10],ans;
    cin>>n;
    cout<<"Enter a Element :";
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            cout<<"Element is present and is at index "<<i;
            break;
        }
        else
        cout<<"-1";
        break;
    }
    
}