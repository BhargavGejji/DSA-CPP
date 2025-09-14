#include<iostream>
#include<string>
using namespace std;
class Library{

    string name;  //name of the book
    int price;  // cost of the book
    int day;    // number of days for which fine is to be paid
    double fine;    // fine amount to be paid

    public:

    void input()
    {
        cout<<"Enter the name of the book ";
        getline(cin,name);
        cout<<endl<<"Enter the price of the book: ";
        cin>>price;
        cout<<endl<<"Enter the number of days for which you want to borrow the book: ";
        cin>>day;

    }

    void cal()
    {
        if(day<=7)
        {
            fine=0.25*day;
        }
        else if(day<=15)
        {
            fine=day*0.4;
        }
        else if(day<=30)
        {
            fine=0.6*day;
        }
        else{
            fine=0.8*day;
        }
    }

    void display()
    {
        cout<<"Book: "<<name;
        cout<<endl;
        cout<<"Days borrowed: "<<day<<endl;
        cout<<"Fine to be paid: "<<fine<<endl;

    }

};

int main()
{
    Library d;
    d.input();
    d.cal();
    d.display();
    return 0;
}