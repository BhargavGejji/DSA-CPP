#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Car{

    int position;
    vector<class Observer*> observerlist;
    
public:
    int getPosition(){
        return position;
    }

    void setPosition(int newposition){
        position=newposition;
        notify();
    }

    void attach(Observer* obs)
    {
        observerlist.push_back(obs);
    }

    void detach(Observer *obs){
        observerlist.erase(remove(observerlist.begin(),observerlist.end(),obs),observerlist.end());
    }

    void notify();

};

class Observer{
    
    Car *_car;


    public:
     Observer(Car *car)
     {
         _car=car;
         _car->attach(this);
     }

     virtual void update()=0;

     protected:
        Car* getCar(){
            return _car;
        }

};

void Car::notify(){
    for(int i=0;i<observerlist.size();i++)
    {
        observerlist[i]->update();
    }
}


class LeftObserver:public Observer{
    
    public:
        LeftObserver(Car *car):Observer(car){}
        void update(){
            int pos=getCar()->getPosition();
            if(pos<0)
            {
                cout<<"Left Position"<<endl;
            }
        }


};

class RightObserver: public Observer{
    public:
        RightObserver(Car* car):Observer(car){}
        void update(){
            int pos=getCar()->getPosition();
            if(pos>0)
            {
                cout<<"Right Side"<<endl;
            }
        }
};

class MiddleObserver: public Observer{
    public:
        MiddleObserver(Car* car):Observer(car){}
        void update(){
            int pos=getCar()->getPosition();
            if(pos==0)
            {
                cout<<"In Centre"<<endl;
            }

        }
};

int main()
{
    Car *car=new Car();
    LeftObserver leftobserver(car);
    RightObserver rightobserver(car);
    MiddleObserver middleobserver(car);

    cout<<"Hit the left right button to drive your car in your city!!! and press the 'b' button to stop driving"<<endl;
    char pressedButton;
    bool breakloop=false;

    while(breakloop==false)
    {
        cin>>pressedButton;
        switch (pressedButton) {
            case 108:{
                         car->setPosition(-1);
                         break;
                     }
            case 99: {
                         car->setPosition(0);
                         break;
                     }
            case 114:{
                         car->setPosition(1);
                         break;
                     }
            case 98:{
                        breakloop=true;
                        break;
                    }
            default:{
                        cout<<"Drive Carefully"<<endl;
                        break;
                    }
                    
        }//end of switch case statement
    }//end of while loop
    

    cout<<"Bye!!!"<<endl;



    return 0;
}
