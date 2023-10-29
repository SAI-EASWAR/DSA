#include<iostream>
#include<vector>
using namespace std;
void givesets(vector<int> nums ,int index,vector<int> output,vector<vector<int>> &ans)
{
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }

    givesets(nums,index+1,output,ans);
    output.push_back(nums[index]);
    givesets(nums,index+1,output,ans);

}

void making(vector<int> nums,vector<vector<int>> &ans,int index,vector<int> output)
    {
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        making(nums,ans,index+1,output);
        output.push_back(nums[index]);
        making(nums,ans,index+1,output);
    }
int main()
{
    int n;
    vector<vector<int>> ans;
    cout<<"Ur input boy";
    vector<int> output;
    vector<int> arr = {1,2,3};
    making(arr,ans,0,output);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }



}