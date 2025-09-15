#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;


bool cycledetection(unordered_map<int,list<int>> &adjlist,unordered_map<int,bool> &visited,int src)
{
    unordered_map<int,int> parent;
    queue<int> q;
    parent[src]=-1;
    visited[src]=true;
    q.push(src);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();

        for(auto neighbour:adjlist[node])
        {
            if(visited[neighbour]==true && parent[neighbour]!=node)
            {
                return true;
            }
            else if(visited[neighbour]==false)
            {
                q.push(neighbour);
                visited[neighbour]=true;
                parent[neighbour]=node;
            }
        }
    }

    return false;
}
int main()
{
    vector<vector<int>> edges;
    int no_edges=edges.size();
    int vertices;
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<no_edges;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    unordered_map<int,bool> visited;
    bool ans=false;
    for(int i=0;i<vertices;i++)
    {
        if(!visited[i])
        {
            ans=cycledetection(adjlist,visited,i);
            if(ans==true)
            {
                cout<<"Cycle Exists"<<endl;
                break;
            }
        }
    }
    if(ans==false)
    {
        cout<<"Cycle Does Not Exist"<<endl;
    }

    return 0;
}
