#include<bits/stdc++.h>
using namespace std;


int main()
{

    map<int,vector<int> > G;
    map<pair<int,int>,int> E;
    G[4].push_back(1);
    E[{4,1}]=1;
    G[4].push_back(2);
    E[{4,2}]=3;

    int v=4;
    for(auto next:G[4])
    {
        cout<<next<<endl;
        cout<<v<<"->"<<next<<"="<<E[ {v,next}]<<endl;
    }





    return 0;
}
