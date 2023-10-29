#include<iostream>
using namespace std;
void ing(int i,int n)
{
    if(i<n){
        return;
    }
    cout<<i;
    ing(i-1,n);
    // cout<<i;
}

bool sorted(int arr[],int N,int i){
    if(i>N) return true;
    bool ans ;
    if(arr[i]>=arr[i-1]) ans=true;
    else ans=false;
    return sorted(arr,N,i+1) & ans;
}
bool realBool(int *arr,int size){
    if(size==0 || size==1)
    {
        return true;
    }
    bool ans;
    if(arr[0]>=arr[1])
    {
        ans=false;
    }
    return realBool(arr+1,size-1) && ans;
}
int main(){
    // cout<<"jhsfaak";
    int arr[]={1,3,5,7,23,9};
    cout<<realBool(arr,6);
}