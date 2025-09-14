#include<iostream>
using namespace std;

class Honda{

    private:
        int type;
        int cost;
    
    public:

        void gettype(){
            cout<<"Please enter the engine type: 2 for 2 stroke and 4 for 4-stroke engine: ";
            cin>>type;
            cout<<endl;
            cout<<"Please enter the initial cost of the engine: ";
            cin>>cost;
        }

        void find()
        {
            switch (type)
            {
            case 2:
                cost=cost+0.1*cost;
                break;
            case 4:
                cost=cost+0.12*cost;
                break;
            default:
                cout<<"Invalid Engine Type";
                break;
            }

        }

        void printcost(){
                cout<<"Engine Type: "<<type<<endl;
                cout<<"New Cost: "<<cost<<endl;
        }

};

int main()
{
    Honda car;
    car.gettype();
    car.find();
    car.printcost();
    return 0;
}