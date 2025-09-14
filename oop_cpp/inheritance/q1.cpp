#include<iostream>
#include<string>
using namespace std;

class Employee{

    protected:
        string name;
        float basic;
    public:
        void getdata(){
            cout<<"Enter you Name: ";
            getline(cin,name);
            cout<<endl;
            cout<<"Enter the given basic pay: ";
            cin>>basic;
            cout<<endl;
        }
};

class Salary: public Employee{

    private:
        float da;
        float hra;
        float gross;
        float net;
        float pf;
    public:
        void calculate(){
            da=0.5*basic;
            hra=0.1*basic;
            gross=basic+da+hra;
            pf=0.0833*(basic+da);
            net=gross-pf;
        }

        void display(){
            cout<<"Name Of Employee: "<<name<<endl;
            cout<<"DA: "<<da<<endl;
            cout<<"HRA: "<<hra<<endl;
            cout<<"Gross Pay: "<<gross<<endl;
            cout<<"Net pay: "<<net<<endl;
        }

};

int main()
{

    
}