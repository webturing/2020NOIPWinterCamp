#include<bits/stdc++.h>
using namespace std;


int main()
{
vector<int> v{1,2,3};
for(int &x:v)++x;
for(int x:v)cout<<x;

cout<<endl;
   map<int,int> a;///pair<int,int>


    int t;
    while(cin>>t)
    {
        a[t]++;
    }
    for(auto x :a)cout<<x.first<<" "<<x.second<<endl;


    return 0;
}
