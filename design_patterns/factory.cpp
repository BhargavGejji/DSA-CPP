#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Shape{
    public:
    virtual void draw()=0;
    virtual ~Shape(){};

};

class Circle:public Shape{

    public:
    void draw() override{
        
        cout<<"Drawing a Circle"<<endl;

    }

};

class Square: public Shape{
    public:
    void draw() override{
        cout<<"Drawing a Square"<<endl;
    }

};

class ShapeFactory{

    public:
    static Shape* createShape(const string &type){

        if(type=="circle")
        {
            return new Circle();
        }
        else if(type=="square"){
            return new Square();
        }
        else{
                return nullptr;
        }
    }

};

int main(){

    Shape* s1=ShapeFactory::createShape("circle");
    Shape* s2=ShapeFactory::createShape("square");
    Shape* s3=ShapeFactory::createShape("triangle");
    if(s1)
    {
        s1->draw();
    }

    if(s2)
    {
        s2->draw();
    }

    if(!s3)
    {
        cout<<"Shape not available";
    }
    return 0;
}

