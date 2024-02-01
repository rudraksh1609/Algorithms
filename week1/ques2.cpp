#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key, int *comparisons)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        (*comparisons)++;
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[25],n,key,comparisons = 0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched:"<<endl;
    cin>>key;
    int index = binarySearch(arr, n, key, &comparisons);
    if(index != -1)
    {
        cout<<"Element found at position:"<< index+1 <<endl;
    }
    else
    {
        cout<<"Element not found in the array"<<endl;
    }
    cout<<"Total comparisons:"<<comparisons<<endl;

    return 0;
}
