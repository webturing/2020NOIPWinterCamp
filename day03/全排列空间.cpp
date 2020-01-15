#include<iostream>
using namespace std;
int main()//n!
{
    for(int n=1234;n<=4321;n++){
        int a=n/1000;
        int b=n%1000/100;
        int c=n%100/10;
        int d=n%10;
        if(a<1||a>4)continue;
        if(b<1||b>4)continue;
        if(c<1||c>4)continue;
        if(d<1||d>4)continue;
        if(a==b||a==c||a==d||b==c||b==d||c==d)continue;
        cout<<n<<endl;
    }

    return 0;
}
