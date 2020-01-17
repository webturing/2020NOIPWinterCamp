#include<iostream>
#include<queue>
using namespace std;

int main() {
   queue<int> Q;
   cout<<Q.size()<<endl;

   for(int i=0;i<10;i++)Q.push(i);

   while(!Q.empty()){
        cout<<Q.front()<<endl;
        Q.pop();
   }

    return 0;

}
