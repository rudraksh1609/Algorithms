#include <iostream>
using namespace std;
bool findSequence(int arr[], int n)
{
    for (int k = n - 1; k >= 2; k--)
    {
        int i = 0, j = k - 1;
        while (i < j)
        {
            int sum = arr[i] + arr[j];
            if (sum == arr[k])
            {
                cout << i+1 << " " << j+1 << " " << k+1 << endl;
                return true;
            }
            else if (sum < arr[k])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    cout << "No sequence found" << endl;
    return false;
}
int main()
{
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;
        int arr[n];
        cout << "Enter the array elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        findSequence(arr, n);
    }
    return 0;
}
