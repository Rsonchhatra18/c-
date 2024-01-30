#include<iostream>
using namespace std;
int main()
{   //min in array
   /* int n;
    int ans=0x7fffffff;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<"Minimun element in array is :"<<ans;*/
    //max in array
    /*int n;
    int ans=(-0x7fffffff - 1);
    cout<<"Enter number of elements :";
    cin>>n;
    cout<<"Enter elements :";
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<"Maximum element in array is :"<<ans;*/
    //2nd largest element 
     int i = 0, a[5],n;
     cin>>n;
    int secondLargest = (-0x7fffffff - 1);
    int largest = a[i];
    int secondSmallest = 0x7fffffff;
    int smallest = a[i];
    for (i=0;i<n;i++) {
        if (a[i]>largest) {
            secondLargest = largest;
            largest = a[i];
        } else if(a[i] < largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
        if (a[i]< smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        }else if(a[i] > smallest && a[i] < secondSmallest) {
            secondSmallest = a[i];
        }
    }
    cout<<secondLargest<< secondSmallest;
    
        
}