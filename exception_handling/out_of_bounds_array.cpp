#include<iostream>
using namespace std;

int main()
{

	int i;
	int arr[5]={1,2,3,4,5};
	cout<<"Enter an index of an array: ";
	cin>>i;
	try{
		if(i>=5)
		{
			throw i;
		}

		cout<<"Element at index: "<<i<<" is: "<<arr[i]<<endl;
	}
	catch(int ex)
	{
		cout<<"Array Index out of bounds: "<<i;
	}
	return 0;
}
