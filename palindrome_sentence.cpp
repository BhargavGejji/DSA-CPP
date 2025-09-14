#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;


int main()
{

 string sentence;
 cout<<"Enter the input sentence"<<endl;
 getline(cin,sentence);


 sentence.erase(remove(sentence.begin(),sentence.end(),' '),sentence.end());
 for(int i=0;i<sentence.length();i++)
 {
		char ch=sentence[i];
		if(isalpha(sentence[i]))
		{
			sentence[i]=tolower(sentence[i]);
		}
 }

 string t=sentence;
 reverse(sentence.begin(),sentence.end());
 if(t==sentence)
 {
	 cout<<"The sentence is palindrome"<<endl;
 }
 else {
	 cout<<"The sentence is not palindrome"<<endl;
 }
	return 0;
}
