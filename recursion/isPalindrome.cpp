#include<iostream>
#include<string>
using namespace std;

bool check(string str,int i,int j)
{
    if(i>j) return true;
    bool ans;
    if(str[i]==str[j]) ans=true;
    else ans=false;
    i++;
    j--;
    // cout<<i<<" "<<j<<endl;
    return ans && check(str,i,j);
}
int main()
{
    string a = "abba";
    cout<<check(a,0,a.length()-1);
}