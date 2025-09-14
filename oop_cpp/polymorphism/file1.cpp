#include<iostream>

class Base{
    public:

    void say_hello() const{
            std::cout<<"Hi- I am from Base Class"<<std::endl;
    }
};

class Derived: public Base{

    public:
    void say_hello() const{
        std::cout<<"Hi- I am from Derived Class"<<std::endl;
    }

};

void greetings(const Base &obj)
{
    std::cout<<"Greetings!"<<std::endl;
    obj.say_hello();
}

int main(){
    Base b;
    Derived d;


    Base* ptr=new Derived();
    Base* ptr2=new Base();
    ptr->say_hello();
    ptr2->say_hello();
return 0;
}