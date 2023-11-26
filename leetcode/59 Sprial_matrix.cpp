#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> ans(n,vector<int> (n,0));
        int cnt = 1;
        int top = 0;
        int bot = n-1;
        int right =n-1;
        int left = 0;
        while(top<=bot && left<=right)
        {
            for(int i = left;i<=right;i++)
            {
                ans[top][i]=cnt;
                cnt++;
            }
            top++;
            for(int i=top;i<=bot;i++)
            {
                ans[i][bot] = cnt;
                cnt++;
            }
            right--;
            if(top<=bot)    {for(int i=right;i>=left;i--)
                {
                    ans[bot][i]=cnt;
                    cnt++;
                }
                bot--;
                for(int i = bot;i>=top;i--)
                {
                    ans[i][left]= cnt;
                    cnt++;
                }
                left++;}
        }
        return ans;
    }
};