#include<iostream>
using namespace std;

void bubbleSort(int arr[],int len)
{
    for(int i = 0;i<=len-2;i++)
    {
        for(int j = 0 ; j<len-2+1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
int main(){
    int a[]={7,5,18,9,0};
    bubbleSort(a,5);
    for(int i =0;i<5;i++) cout<<a[i]<<" ";
}