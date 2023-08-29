#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1], right[n2];

    for(int i=0;i<n1;i++)
        left[i] = arr[l+i];
    for(int i=0;i<n2;i++)
        right[i] = arr[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while(i<n1)
        arr[k++] = left[i++];
    while(j<n2)
        arr[k++] = right[j++];
}

void merge_sort(int arr[],int low,int high)
{
    if (low >= high)
        return;
    int mid = (low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    
    merge_sort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}