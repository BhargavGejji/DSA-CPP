#include<iostream>
using namespace std;

class Shape{

    public:
    virtual void draw()=0;
};

class Rectangle: public Shape{
    public:

    void draw(){
        cout<<"Rectangle is being drawn"<<endl;
    }
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"Circle is being drawn"<<endl;
    }

};

class Triangle: public Shape{
    public:
    void draw(){
        cout<<"Triangle is being drawn"<<endl;
    }

};

class Employee{
    public:
    virtual void work(){
        cout<<"Employee works"<<endl;
    }

};


int main(){
    Shape* s[]={new Circle(),new Triangle(), new Rectangle()};
    for(int i=0;i<3;i++)
    {
        s[i]->draw();
    }
    return 0;
}

/*

Phase 4: Run-Time Polymorphism (Overriding)

Goal: Learn dynamic polymorphism using virtual functions.

Virtual Functions

Base class Shape with virtual draw().

Derived: Circle, Rectangle, Triangle.

Store them in a Shape* array and call draw() on each.

Employee Example

Base Employee with work().

Derived: Developer, Manager, Tester.

Store objects in Employee* array and call work().

Add an overridden function calculateBonus().

Phase 5: Abstract Classes and Interfaces

Goal: Learn abstraction and how to enforce contracts.

Bank Account

Abstract class Account with deposit(), withdraw().

Derived: SavingsAccount, CurrentAccount.

Use Account* pointers to store derived objects and call functions.

Payment System

Interface/abstract Payment with pay(amount).

Derived: CreditCard, UPI, Cash.

Call pay() polymorphically.
*/