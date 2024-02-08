#include<iostream>
using namespace std;
int main()
{
    int arr[25],t,n,i,j,k,l,key,c;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter size of array : ";
        cin>>n;
        cout<<"Enter elements in array : ";
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cout<<"Enter a key : ";
        cin>>key;
        c=0;
        for(k=0;k<n;k++)
        {
            for(l=k+1;l<n;l++)
            {
                if(abs(arr[k]-arr[l])==key)
                c++;
            }
        }
        
        cout<<"No of pairs:"<<c<<endl;
    }
}

