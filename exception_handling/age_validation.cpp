#include<iostream>
using namespace std;

int main()
{

	int age;
	cout<<"Enter your age";
	cin>>age;
	try{
		if(age<0 || age>100)
		{
			throw age;
		}
		cout<<"Age entered: "<<age;
	}
	catch(int ex)
	{
		cout<<"Invalid Age"<<" "<<ex;
	}
	return 0;
}
