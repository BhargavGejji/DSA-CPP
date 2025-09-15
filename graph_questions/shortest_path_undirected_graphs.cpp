#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;


vector<int> shortestparth(unordered_map<int,list<int>> &adjlist,int src,int dest)
{
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    queue<int> q;

    q.push(src);
    visited[src]=true;
    parent[src]=-1;

    // Performing bfs traversal of the graph from the given source node.
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto neighbour:adjlist[node])
        {
            if(!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour]=true;
                parent[neighbour]=node;
            }
        }
    }

    //Preparing the shortest path
    vector<int> ans;
    int current_node=dest;
    while(current_node!=-1)
    {
        ans.push_back(current_node);
        current_node=parent[current_node];
    }
    cout<<endl;

    reverse(ans.begin(),ans.end());
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;


}
int main()
{
    vector<vector<int>> edges;
    int no_edges;
    int vertices;
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<no_edges;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    int src;
    int dest;

    return 0;
}