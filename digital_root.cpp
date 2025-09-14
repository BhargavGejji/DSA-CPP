#include <iostream>
#include<vector>
#include<string>
using namespace std;


int digital_root(int n)
{
	if(n==0)
	{
		return n;
	}
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum<=9)
	{
		return sum;
	}

	return digital_root(sum);
}
int main()
{
	int n;
	cout<<"Enter a number whose digital root needs to be found out";
	cout<<endl;
	cin>>n;
	int ans=digital_root(n);
	cout<<"The Digital Root of the number"<<" "<<n<<" is: "<<ans;
	cout<<endl;
	return 0;
}
