#include<iostream>
#include<vector>
#include<limits.h>
#include<cmath>
using namespace std;


int solve(int n,vector<int> &v,vector<int> &ans,vector<int> &temp)
{
	if(n==0)
	{
		if(!ans.size() && temp.size()<ans.size())
		{
			ans.clear();
			for(int x:temp)
			{
				ans.push_back(x);
			}

		}
		else{
				for(int x:temp)
				{
					ans.push_back(x);
				}

		}
			return 0;
	}
	if(n<0)
	{
		return INT_MAX;
	}
int no=INT_MAX;
	for(int i=v.size()-1;i>=0;i--)
	{
		temp.push_back(v[i]);
		int consider=1+solve(n-v[i],v,ans,temp);
		temp.pop_back();
		int not_consider=solve(n,v,ans,temp);
		no=min(consider,not_consider);
	}

	return no;
}
int main()
{

	vector<int> v={2000,500,200,100,50,20,10,5,2,1};
	int n=43;
	vector<int> ans;
	vector<int> temp;
	int x=solve(n,v,ans,temp);
	cout<<"Required Change is as follows: ";
	for(int x:ans)
	{
		cout<<x<<" ";
	}
	cout<<endl<<"The minimum number of coins needed are: "<<x<<endl;
	return 0;
}
