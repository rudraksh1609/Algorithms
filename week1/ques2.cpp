#include <stdio.h>

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

    if (index != -1)
    {
        printf("Element %d found at index %d\n", key, index);
    }
    else
    {
        printf("Element %d not found in the array\n", key);
    }

    printf("Total comparisons: %d\n", comparisons);

    return 0;
}
