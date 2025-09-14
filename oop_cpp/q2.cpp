#include<iostream>
using namespace std;

class Loan{

    int time;
    double principle;
    double rate=10;
    double interest;
    double amt;

    public:
        void getdata(){
            cout<<"Please enter the principle amount: ";
            cin>>principle;
            cout<<endl<<"Please enter the time for which you need to borrow the amount: ";
            cin>>time;
            cout<<endl;
        }

        void calculate(){
            interest=(principle*rate*time)/100;
            amt=interest+principle;
        }

        void display()
        {
            cout<<"Interest: "<<interest;
            cout<<endl<<"Amount: "<<amt<<endl;
        }

};

int main()
{
    Loan l;
    l.getdata();
    l.calculate();
    l.display();
    return 0;
}