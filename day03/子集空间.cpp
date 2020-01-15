#include<iostream>
using namespace std;
int main()//2^n
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,0,0,1,1};

    for(b[0]=0;b[0]<=1;++b[0])
    for(b[1]=0;b[1]<=1;++b[1])
    for(b[2]=0;b[2]<=1;++b[2])
    for(b[3]=0;b[3]<=1;++b[3])
    for(b[4]=0;b[4]<=1;++b[4]){
        if(b[0]*a[0]+b[1]*a[1]+b[2]*a[2]+b[3]*a[3]+b[4]*a[4]!=10)continue;
        cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<endl;
        cout<<b[0]*a[0]+b[1]*a[1]+b[2]*a[2]+b[3]*a[3]+b[4]*a[4]<<endl;
    }

    return 0;
}
