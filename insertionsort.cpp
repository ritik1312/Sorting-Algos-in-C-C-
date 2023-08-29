#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        int j=i;
        key = arr[i];
        while(j>0 && arr[j-1] > key)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j]=key;
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    // takes list of elements input from user
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    insertion_sort(arr,n);
    printArray(arr,n);
    return 0;
}