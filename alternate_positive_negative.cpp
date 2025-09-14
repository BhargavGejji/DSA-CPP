#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    vector<int> v={9, 4, -2, -1, 5, 0, -5, -3, 2};
    int j=0;
    bool flag=true;
    for(int i=0;i<v.size();i++)
    {
        if(flag)
        {
            if(v[i]>=0)
            {
                swap(v[i],v[j]);
                j++;
                flag=!flag;
                i--;
            }
        }
        else{
            if(v[i]<0)
            {
                swap(v[i],v[j]);
                j++;
                flag=!flag;
                i--;
            }
        }
        
    }//end of for loop
    cout<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
