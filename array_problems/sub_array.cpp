#include<iostream>
#include<vector>
using namespace std;
int LongSubLen(vector<int> arr,int K)
{
    int right=0;
    int left =0;
    int sum =0;
    int len =0;
    cout<<right<<" "<<len<<" "<<left<<" "<<sum<<" ";
    cout<<endl;
    while(right<arr.size())
    {
        while(sum>K && right>=left)
        {
            sum-=arr[left];
            left++;
        }
        if(sum<arr.size()){
            sum+=arr[right];
        }
        cout<<sum<<" ";
        right++;
        if(sum==K)
        {
            len = max(len,right-left);
        }
    }
    cout<<endl;
    return len;
}
int main(){
    vector<int> a ={4,1,4,2,2,1,1,1};
    cout<<LongSubLen(a,6);
}