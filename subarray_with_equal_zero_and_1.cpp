#include<iostream>
#include<set>
#include<unordered_set>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={1,-1,-1,1,-1,1,1};
    int sum=0;
    unordered_set<int> seen;
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if(sum==0){
            count++;
        }

        if(seen.find(sum)!=seen.end())
        {
            count++;
        }
        seen.insert(sum);
    }

    cout<<"The Number of subarrays with equal 1 and 0 are: "<<count<<endl;

    return 0;
}