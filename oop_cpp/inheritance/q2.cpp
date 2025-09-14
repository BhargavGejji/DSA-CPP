#include<iostream>
#include<string>
using namespace std;


class Product{

    private:
        int pno;
        string name;
    protected:
        int qnty;
    
    public:
        void getdata(){
            cout<<"Enter the Product Number: ";
            cin>>pno;
            cout<<endl;
            cin.ignore();
            cout<<"Enter the Name of the product: ";
            getline(cin,name);

        }
        void show(){

            cout<<"Product Number: "<<pno<<endl;
            cout<<"Product Name: "<<name<<endl;

        }

};

class Sale: public Product{

    private:
        double rate;
        double amount;
    
    public:
        void input(){
            cout<<"Please enter the discount rate: ";
            cin>>rate;
            cout<<endl;
        }

        void calculate(){
            amount=rate*qnty;
        }

        void display(){
            cout<<"Final Amount to be paid: "<<amount<<endl;
        }

};