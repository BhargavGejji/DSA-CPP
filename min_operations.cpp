#include <filesystem>
#include<iostream>
#include<limits.h>
using namespace std;

int solve(int n,int m)
{

	if(m==n)
	{
		return 0;
	}
	if(m>n)
	{
		return INT_MAX;
	}
	int double_number;
	if(m!=0)
		double_number=1+solve(n,m*2);
	int add_one=1+solve(n,m+1);
	return min(double_number,add_one);
}
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;

	cout<<"The minimum number of operations to reach: "<<n<<"are:"<<solve(n,0)<<endl;
	return 0;
}
