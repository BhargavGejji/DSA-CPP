#include<iostream>
#include<cmath>
using namespace std;


int main()
{

	int n;
	cout<<"Enter the number whose square root is to be calculated: ";
	cin>>n;
	try{
		if(n<0)
		{
			throw n;
		}

		cout<<"Square root of: "<<n<<" is: "<<sqrt(n);
	}
	catch(int ex)
	{
		cout<<"Square root of negative number is not allowed"<<endl;
	}
	return 0;
}
