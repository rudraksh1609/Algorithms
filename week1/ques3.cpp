#include<iostream>
#include<cmath>
using namespace std;
int linearsearch(int arr[],int a, int b, int k)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(arr[i]==k)
        {
            return -1;
        }
    }
    return 0;
}
int main()
{
    int arr[25],n,key,i,x,y;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements for the sorted array:"<< endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched:"<< endl;
    cin>>key;
    if(arr[0]==key)
    {
        cout<<"Key Present"<<endl;
    }
    i=1;
    while(i<n && arr[i]<=key)
    {
        i=i*2;
    }
    x=min(i,n-1);
    y=linearsearch(arr,i/2,x,key);
    if(y==-1)
    {
        cout<<"Key present"<<endl;
    }
    else
    {
        cout<<"Key not present"<<endl;
    }
    return 0;
}

