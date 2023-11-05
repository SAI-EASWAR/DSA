#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int node,vector<vector<int>> graph,vector<int> &vis)
{
    queue<int> q;
    q.push(node);
    vis[node] =1;
    while(!q.empty())
    {
        int current = q.front();
        cout<<current;
        q.pop();
        for(int i =0;i<graph[current].size();i++)
        {
            if(graph[current][i]==1 && vis[i]==0)
            {
                q.push(i);
                vis[i]=1;
            }
        }
    }
}
void dfs(int node,vector<vector<int>> graph,vector<int> &vis)
{
    vis[node] = 1;
    cout<<node<<" ";
    for(int i=0;i<graph[node].size();i++)
    {
        if(graph[node][i]==1 && vis[i]==0)
        {
            dfs(i,graph,vis);
        }
    }
}
int main()
{
    vector<vector<int>> graph = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {0, 1, 1, 0, 1, 1},
    {0, 0, 0, 1, 0, 0},
    {0, 0, 0, 1, 0, 0}
};
    vector<int> visited(6,0);
    dfs(0,graph,visited);

}