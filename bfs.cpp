#include<iostream>
#include<queue>
#include <unordered_map>
using namespace std;


void bfs(int source,vector<int> &bfs_traversal,int v,vector<vector<int>> &adj_list)
{
	queue<int> q;
	vector<bool> visited(v,false);
	q.push(source);
	visited[source]=true;
	bfs_traversal.push_back(source);
	while(!q.empty())
	{
		int d=q.front();
		q.pop();
		for(int x:adj_list[d])
		{
       if(!visited[x])
			 {
				 q.push(x);
				 visited[x]=true;
			 }
		}

	}

}

int main()
{

	int V;
	cout<<"Enter the number of vertices ";
	cin>>V;
	cout<<"Enter the number of edges ";
	int E;
	cin>>E;
	int source;
	cout<<"Enter the source node: ";
	cin>>source;

	cout<<"Enter the edges one by one "<<endl;


	cout<<"Enter 1 if the graph is directed otherwise enter 0"<<endl;
	bool directed;
	cin>>directed;
	vector<vector<int>> adj_list(V);
	for(int i=0;i<E;i++)
	{
	
		int u,v;
		cout<<"Enter the start: ";
		cin>>u;
		cout<<"Enter the final node: ";
		cin>>v;
		
		adj_list[u].push_back(v);
		if(!directed)
		{
			adj_list[v].push_back(u);
		}
	}
	vector<int> bfs_traversal;
	bfs(source,bfs_traversal,V,adj_list);
	for(int x: bfs_traversal)
	{
		cout<<x<<" ";
	}
	return 0;
}
