#include<iostream>
#include<queue>
using namespace std;

int main()
{
    vector<int> v1,v2(3),v3(4,0),v4(5,-2),v5(v4);
    //  for(int i=0;i<v4.size();i++)cout<<v4[i]<<endl;
    v4.push_back(9);
    v4.pop_back();
    for(int i=0; i<v4.size(); i++)cout<<v4[i]<<endl;
    sort(v.begin(),v.end());
    return 0;

}

