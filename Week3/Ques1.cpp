#include <iostream>
using namespace std;
void insertionSort(int arr[], int n, int& c, int& s) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            c++;
            arr[j + 1] = arr[j];
            j--;
            s++;
        }
        arr[j + 1] = key;
        s++;
    }
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
        int c = 0;
        int s = 0;
        insertionSort(arr, n, c, s);
        cout << "Sorted array:";
        for (int i = 0; i < n; i++) 
        {
            cout << " " << arr[i];
        }
        cout << endl;
        cout << "Total comparisons: " << c << endl;
        cout << "Total shifts: " << s << endl;
    }
    return 0;
}
