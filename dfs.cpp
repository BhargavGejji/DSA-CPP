#include<iostream>
#include<vector>
using namespace std;


void dfs(int node,vector<bool> &visited,vector<vector<int>> adj_list,vector<int> &dfs_traversal)
{
	visited[node]=true;
	dfs_traversal.push_back(node);
	for(int x:adj_list[node])
	{
		if(!visited[x])
		{
			dfs(x,visited,adj_list,dfs_traversal);
		}
	}

}

int main()
{
	int V,E;
	cout<<"Enter the number of vertices: ";
	cin>>V;
	cout<<endl;
	cout<<"Enter the number of edges: ";
	cin>>E;

	cout<<endl<<"Enter the edges one by one"<<endl;
	vector<vector<int>> adj_list(V);
	for(int i=0;i<E;i++)
	{
		int u,v;
		cout<<"Enter the initial edge: ";
		cin>>u;
		cout<<endl;
		cout<<"Enter the desitnation edge: ";
		cin>>v;
		adj_list[u].push_back(v);
		adj_list[v].push_back(u);
	}

	vector<bool> visited(V,false);


	int source;
	cout<<"Enter the source node: ";
	cin>>source;

	vector<int> dfs_traversal;
	dfs(source,visited,adj_list,dfs_traversal);
	for(auto x:dfs_traversal)
	{
		cout<<x<<" ";
	}
	return 0;
}
