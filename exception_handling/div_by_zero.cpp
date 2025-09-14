#include<iostream>
using namespace std;


int main()
{
	int numerator,denominator;
	cout<<"Enter the numerator";
	cin>>numerator;
	cout<<endl;
	cout<<"Enter the denominator"<<endl;
	cin>>denominator;

	int quotient;
	try{
		if(denominator==0)
		{
			throw denominator;
		}
		quotient=numerator/denominator;
	}
	catch(int ex)
	{
		cout<<"Division by 0 is not allowed"<<endl;
	}

	cout<<"Division: "<<quotient;
	return 0;
}
