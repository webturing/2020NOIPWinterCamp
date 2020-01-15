#include<iostream>
using namespace std;
int main()
{
    //x+y==10 4*x+2*y=22
    int x,y;
    for(x=0;x<=10;x++)
   {
       int y=10-x;
        if(x+y==10&&4*x+2*y==22){
            cout<<x<<" "<<y<<endl;
        }
    }


    return 0;
}
