#include <cctype>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int root_digital(int number)
{
	if(number==0)
	{
		return number;
	}
	
	int sum=0;
	while(number!=0)
	{
		sum+=number%10;
		number/=10;
	}
	if(sum<=9)
	{
		return sum;
	}
	return root_digital(sum);

}
int main()
{
	cout<<"Enter the Credit Card Number to be validated";
	string credit_card_number;
	getline(cin,credit_card_number);
	int sum=0;
	for(char c:credit_card_number)
	{
		if(isdigit(c))
			sum+=c-'0';
	}
	int digital_root=root_digital(sum);
	if(digital_root==7)
	{
		cout<<"The calculated digital root is: "<<digital_root;
		cout<<endl;
		cout<<"The Given Credit Card Number: "<<credit_card_number<<" is valid"<<endl;
	}
	else {
		cout<<"The calculated digital root is: "<<digital_root;
		cout<<endl;
		cout<<"The Given Credit Card Number: "<<credit_card_number<<" is NOT valid"<<endl;
	}
	return 0;
}
