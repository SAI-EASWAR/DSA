#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// void bfs(vector<vector<int>> & graph,int node,vector<bool> &visited)
// {
//     queue<int> q;
//     q.push(node);
//     visited[node]=1;
//     while(!q.empty())
//     {
//         int n = q.front();
//         cout<<n<<" ";
//         q.pop();

//         for(int i =0;i<graph.size();i++)
//         {
//             if(graph[n][i]==1 && visited[i]==0)
//             {
//                 q.push(i);
//                 visited[i]=1;
//             }
//         }
//     }
// }
void bfs(vector<vector<int>> &graph, int node, vector<bool> &visited) {
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty()) {
        int n = q.front();
        cout << n << " ";
        q.pop();

        for (int i = 0; i < graph.size(); i++) {
            if (graph[n][i] == 1 && visited[i] == 0) { // Use 'i' instead of 'n' here
                q.push(i);
                visited[i] = 1;
            }
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
    {0, 0, 0, 1, 0, 0}};

    vector<bool> visited(6,0);
    bfs(graph,0,visited);

}