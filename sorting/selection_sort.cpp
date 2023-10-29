#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++){
        int min_i = i;
        for(int j=i;j<=n-1;j++){
            if(arr[min_i]>arr[j]){
                min_i = j;
            }
        }
    int temp = arr[i];
    arr[i]=arr[min_i];
    arr[min_i]= temp;
    }

}

int main()
{
    int n ;
    cin>> n;
    int arr[n];
    for(int i =0;i<n ;i++) cin>>arr[i];
    selectionSort(arr,n);
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";

}