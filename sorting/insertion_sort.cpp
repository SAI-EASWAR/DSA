#include<iostream>
using namespace std;

// taking every element and postioning in correct order , by swapping
void insertionSort(int arr[],int len)
{
    for(int i =0;i<len;i++)
    {
        int j = i;
        while(j>0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}


int main()
{
    int n ;
    cin>> n;
    int arr[n];
    for(int i =0;i<n ;i++) cin>>arr[i];
    insertionSort(arr,n);
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
}