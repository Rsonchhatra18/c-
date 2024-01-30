#include<iostream>
using namespace std;

/*int BinarySearch(int arr[],int n,int key)     increaing order
{
    int mid;
    int start=0,end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}*/

/*int BinarySearch(int arr[],int n,int key)         decreasing order
{
    int mid;
    int start=0,end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}*/
int main()
{
    int arr[1000];
    int n,key;
    cout<<"Enter number of elements in the array :";
    cin>>n;
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched :";
    cin>>key;
    cout<<"index of given element in array is :"<<BinarySearch(arr,n,key);
    return 0;
}