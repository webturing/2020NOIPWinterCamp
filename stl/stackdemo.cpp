#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> S;
    cout<<S.size()<<endl;
    S.push(1);
    cout<<S.top()<<endl;///1
    cout<<S.size()<<endl;///1
    S.pop();
    cout<<S.empty()<<endl;

    for(int i=0;i<10;i++)
        S.push(i);
    while(!S.empty()){
        cout<<S.top()<<endl;
        S.pop();
    }

    return 0;

}
