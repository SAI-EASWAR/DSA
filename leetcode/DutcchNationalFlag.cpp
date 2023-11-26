#include <bits/stdc++.h>
using namespace std;
void sortArray(vector<int> &arr, int n) {
  // Write your code here
  int mid = 0;
  int low = 0;
  int len = arr.size();
  int high = len - 1;

  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      mid++;
      low++;
    }
    else if (arr[mid]==1)
    {
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
    }
  }
}
int main(){
    vector<int> a = {1,0,0,2,1,1,0,2};
    sortArray(a,a.size());
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}