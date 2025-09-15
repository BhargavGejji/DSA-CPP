#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<stack>
#include<limits.h>
using namespace std;

void dfs(int node,unordered_map<int,bool> &visited,stack<int> &s,unordered_map<int,list<pair<int,int>>> &adjlist)
{
    visited[node]=true;
    for(auto neighbour:adjlist[node])
    {
        if(!visited[neighbour.first])
        {
            dfs(neighbour.first,visited,s,adjlist);
        }
    }
    s.push(node);
}
int main()
{
    vector<vector<int>> edges;
    int vertices;
    unordered_map<int,list<pair<int,int>>> adjlist;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        int weight=edges[i][2];
        adjlist[u].push_back(make_pair(v,weight));
    }

    unordered_map<int,bool> visited;
    stack<int> s;
    int src;
    for(int i=0;i<vertices;i++)
    {
        if(!visited[vertices])
        {
            dfs(i,visited,s,adjlist);
        }
    }

    vector<int> dist(vertices,INT_MAX);
    dist[src]=0;
    while(!s.empty())
    {
        int node=s.top();
        s.pop();
        if(dist[node]!=INT_MAX){
            for(auto neighbour:adjlist[node])
            {
                if((dist[node]+neighbour.second)<dist[neighbour.first]){
                    dist[neighbour.first]=dist[node]+neighbour.second;
                }
            }
        }
    }


    cout<<endl;
    for(int x:dist)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}