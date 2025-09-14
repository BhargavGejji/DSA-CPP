#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {


  public:
    int median(vector<vector<int>> &mat) {
        multiset<int> ms;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                ms.insert(mat[i][j]);   
            }
        }
        vector<int> v;
        for(multiset<int>::iterator it=ms.begin();it!=ms.end();it++)
        {
            v.push_back(*it);
        }
        
        int x=v.size();
        if(x%2==0)
        {
            int l=v[x/2];
            int r=v[(x/2)+1];
            return (l+r)/2;
        }
        return v[(x+1)/2];
        
    }
};

int main(){
    Solution x;
    vector<vector<int>> v={
        {1, 3, 5}, 
        {2, 6, 9}, 
        {3, 6, 9}
    };
    cout<<x.median(v)<<endl;
    return 0;
}
