#include<bits/stdc++.h>
using namespace std;
int giveIndex(int array[],int low ,int high){
    int pivot  = array[low];
    int li = low;
    int ri = high;
    while(li<ri){


        while(array[li]<=pivot && li<=high-1){
            li++;
        }

        while(array[ri]> pivot && ri>=low+1){
            ri--;
        }

        if(li<ri){
            swap(array[li],array[ri]);
        }

    }
    swap(array[low],array[ri]);
    return ri;

}
void quickSort(int array[],int low, int high){
    if(low<high){
        int pivotI = giveIndex(array,low ,high);
        quickSort(array,low,pivotI-1);
        quickSort(array,pivotI+1,high);
    }
}
int main(){
    int array[]= {4,6,2,5,7,9,1,3};
    quickSort(array,0,7);
    for(int i = 0 ;i<8;i++){
        cout<<array[i];
    }
}


