#include<iostream>
using namespace std;
int main()
{
  int arr[25],n,t,y;
  cout<<"Enter the number of test cases"<<endl;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    cout<<"Enter size of array for test case"<< i+1 << endl;
    cin>>n;
    for(int j=0; j<n; j++)
    {
      cout<<"Enter the elements for array of size:"<< n << endl;
      cin>>arr[j];
    }
    cout<<"Enter the elements to be searched:"<<endl;
    cin>>y;
    for(int j=0; j<n; j++)
    {
      if(arr[j]==y)
      {
        cout<<"Element Present at:"<< j+1 << endl;
        break;
      }
      else
      {
        cout<<"Element not present"<<endl;
      }
    }
  }
}
