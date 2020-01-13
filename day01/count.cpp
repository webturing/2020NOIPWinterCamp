#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
//统计关键字的次数
int main() {
    int a[5]={1,1,6,3,3};
    int b[10];///book
    //memset(b,0,sizeof(b));
    fill(b,b+10,0);
    for(int i=0;i<5;i++)
    b[a[i]]++;


    for(int i=0;i<10;i++){
        if(b[i]!=0)
        for(int j=0;j<b[i];j++)
            cout<<i<<" ";
    }
}
/**
 Input:
 10
 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */



