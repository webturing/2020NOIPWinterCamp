#include<iostream>
#include<queue>
#include<cstdlib>
#include<vector>
using namespace std;

int main() {
   priority_queue<int,vector<int>,greater<int> > Q;
   cout<<Q.size()<<endl;

   for(int i=0;i<10;i++){
        int x=rand()%100;
        cout<<x<<" ";
        Q.push(x);
   }
    cout<<endl;
   while(!Q.empty()){
        cout<<Q.top()<<endl;
        Q.pop();
   }

    return 0;

}
