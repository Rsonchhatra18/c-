#include<iostream>
using namespace std;
int main()
{
   /* int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=(5-row);col++)
        {
            cout<<" ";
        }
        for(col=1;col<=((2*row)-1);col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
   /* int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=(5-row);col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        for(col=row-1;col>=1;col--)
        {
            cout<<col;
        }
        cout<<endl;
    }*/
   /* int row,col;
    for(row=5;row>=1;row--)
    {
        for(col=5-row;col>=1;col--)
        {
            cout<<" ";
        }
        for(col=1;col<=((2*row)-1);col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
   int row,col,n;
    cout<<"Enter input :";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   /* int row,col,n;
    cout<<"Enter input :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
    /*int row,col,n;
    cout<<"Enter input :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=(n-row);col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        for(row=n;row>=1;row--)
     {
            for(col=n-row;col>=1;col--)
            {
                cout<<" ";
            }
            for(col=1;col<=row;col++)
            {
                cout<<"* ";
            }
            cout<<endl;
     }*/
}                    