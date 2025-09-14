#include<iostream>
#include <iterator>
#include<vector>
#include<limits.h>
using namespace std;


int main()
{

	int V,E;

	vector<vector<int>> edges; 

	vector<int> distance(V,INT_MAX);
	int source;
	int destination;
	cout<<"Enter the source: ";
	cin>>source;
	cout<<"Enter the destination: ";
	cin>>destination;
	distance[source]=0;
	int n=V;
	for(int i=1;i<=n;i++)
	{

			for(int j=0;j<edges.size();j++)
			{
					int u=edges[j][0];
					int v=edges[j][1];
					int wt=edges[j][2];

					if(distance[u]!=INT_MAX && ((distance[u]+wt)<distance[v]))
					{
						distance[v]=distance[u]+wt;
					}
			}
	}

	int flag=0;
	for(int j=0;j<edges.size();j++)
	{
		int u=edges[j][0];
		int v=edges[j][1];
		int wt=edges[j][2];
		if(distance[u]!=INT_MAX && ((distance[u]+wt)<distance[v]))
					{
						flag=1;
					}
	}
	if(flag==0)
	{
		cout<<"The shortest distance from "<<source<<" to "<<destination<<" is: "<<distance[destination];
		cout<<endl;
	}
	else{
		cout<<"There is a negative weight cycle present"<<endl;
	}
	return 0;
}
