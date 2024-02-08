#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int count_occurrences(int arr[], int n, int key)
{
    int index = binary_search(arr, n, key);
    if (index == -1)
        return 0;
    int count = 1;

    int i = index-1;
    while (i >=0 && arr[i] == key)
    {
        count++;
        i--;
    }

    int j = index + 1;
    while (j < n && arr[j] == key) {
        count++;
        j++;
    }
    return count;
}

int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        int key;
        cout << "Enter the key element to search: ";
        cin >> key;

        int count = count_occurrences(arr, n, key);
        if (count == 0)
            cout << "Key not present" << endl;
        else
            cout << "Key element " << key << " found " << count << " times" << endl;
    }

    return 0;
}
