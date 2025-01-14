#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int j =1;
        while (j>0 && arr[j-1])
        {
            int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j+1] = temp;
            j--;
        }
        
    }
    
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n]; 
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}