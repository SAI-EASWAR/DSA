#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

// void merge(vector<int> &arr,int first,int mid,int last){
//         vector<int> temp;
//         int i = first;
//         int j = mid+1;
//         while(i<=mid && j <=last)
//         {
//             if(arr[i]<=arr[j])
//             {
//                 temp.push_back(arr[i]);
//                 i++;
//             }

//             else
//             {
//                 temp.push_back(arr[j]);
//                 j++;
//             }
//         }

//         while(i<=mid){
//             temp.push_back(arr[i]);
//             i++;
//         }
//         while(j<=last){
//             temp.push_back(arr[i]);
//             j++;
//         }
        
//         for(int i = first;i<=last;i++){
//             arr[i]=temp[i-first];
//         }
//     }
void merge(vector<int> &arr, int low,int mid,int high){

    vector<int> temp;
    int left = low;
    int right = mid+1;
    
    while(left<=mid &&  right <=high){
        if(arr[left] <=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i =low ; i<=high ; i++){
        arr[i]= temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int first,int last)
{
        if(first>=last) return;
        int mid = (first+last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        merge(arr,first,mid,last);

}
int main(){
    vector<int> artr= {3,1,2,9,4,7,9};
    mergeSort(artr,0,6);
    for(int i=0;i<7;i++){
        cout<<artr[i]<<" ";
    }

}