#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[],int low,int high)
{
    int pivot = arr[high];

    int index = low;
    for(int i=low;i<high;i++)
    {
        if(arr[i] < pivot)
        {
            swap(arr[index],arr[i]);
            index++;
        }
    }
    swap(arr[index],arr[high]);
    return index;
}

void quick_sort(int arr[],int l,int r)
{
    if(l>=r)
        return;
    int pi = partition(arr,l,r);
    quick_sort(arr,l,pi-1);
    quick_sort(arr,pi+1,r);
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
    
    quick_sort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}