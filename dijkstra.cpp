#include<iostream>
#include<set>
#include <unordered_map>
#include<vector>
#include<limits.h>
#include<list>
using namespace std;



int main()
{


	int V,E;
	vector<vector<int>> edges;
	unordered_map<int, list<pair<int,int>>> adj_list;

	for(int i=0;i<E;i++)
	{
		int u=edges[i][0];
		int v=edges[i][1];
		int wt=edges[i][2];

		adj_list[u].push_back(make_pair(v,wt));
	}

	vector<int> distance(V,INT_MAX);
	set<pair<int,int>> st;
	int source;
	cout<<"Enter the source node: ";
	cin>>source;
	cout<<endl;
	distance[source]=0;
	st.insert(make_pair(0,source));

	while(!st.empty())
	{
		pair<int,int> p=*(st.begin());
		int nodeDistance=p.first;
		int node=p.second;

		st.erase(st.begin());
		for(auto x:adj_list[node])
		{
					int u=x.first;
					int wt=x.second;
					if(nodeDistance+wt<distance[u])
					{
						auto record=st.find(make_pair(distance[u],u));
						if(record!=st.end())
						{
							st.erase(record);
						}

						st.insert(make_pair(nodeDistance+wt,u));
						distance[u]=nodeDistance+wt;
					}
		}
	}
	cout<<"Shortest distance from: "<<source<<" to other nodes is as follows: ";
	for(int x:distance)
	{
		cout<<x<<" ";
	}
	return 0;
}
