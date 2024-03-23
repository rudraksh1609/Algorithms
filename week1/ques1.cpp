#include<iostream>
using namespace std;
int main()
{
  int arr[25],n,t,y,flag,j;
  cout<<"Enter the number of test cases"<<endl;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    cout<<"Enter size of array for test case"<< i+1 << endl;
    cin>>n;
    cout<<"Enter the elements for array of size:"<< n << endl;
    for(j=0; j<n; j++)
    {
      cin>>arr[j];
    }
    cout<<"Enter the elements to be searched:"<<endl;
    cin>>y;
    flag=0;
    for(j=0; j<n; j++)
    {
      if(arr[j]==y)
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
    {
      cout<<"Present"<<endl;
      cout<<"Comparisons:"<<j+1<<endl;
    }
    else
    {
      cout<<"Not Present"<<endl;
      cout<<"Comparisons:"<<j<<endl;
    }
  }
}
