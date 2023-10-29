#include <iostream>
#include <vector>
#include<queue>
using namespace std;

void bfs(vector<vector<int>>& graph,int nodes)
{
    queue<int> q;
    int visited[nodes]={0};
    q.push(0);
    visited[0]=1;
    while(!q.empty()){
        int n = q.front();
        q.pop();
        cout<<n<<" ";
        for(int i=0;i<nodes;i++){
            if(graph[n][i] == 1 && visited[i]==0){
                visited[i]=1;
                q.push(i);
            }
        }
    }
}
void dfs(vector<vector<int>>& graph,vector<int> &visited,int node)
{
    visited[node] =1;
    cout<<node<<" ";
    for(int i=0;i<graph.size();i++){
        if(graph[node][i] == 1 && visited[i]==0){
            dfs(graph,visited,i);
        }
    }
}
int main()
{
    // int nodes,edges;
    // cout<<"give the values for nodes and edges: ";
    // cin>>nodes>>edges;
    // vector<vector<int>> graph(nodes,vector<int>(nodes,0));
    // for(int i=0;i<edges;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     graph[x][y]=1;
    //     graph[y][x]=1;
    // }
    // for(int i=0;i<nodes;i++){
    //     for(int j=0;j<nodes;j++){
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>> graph = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {0, 1, 1, 0, 1, 1},
    {0, 0, 0, 1, 0, 0},
    {0, 0, 0, 1, 0, 0}
};
    bfs(graph,6);
    vector<int> visited(0,6);
    dfs(graph,visited,0);
}
