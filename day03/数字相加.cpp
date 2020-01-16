#include<bits/stdc++.h>
using namespace std;

int a[9]={1,2,3,4,5,6,7,8,9};
int n=9;
int book[9];
int b[9];
int tot=0;
void dfs(int k)
{
    if(k>=n){
        int x=b[0]*100+b[1]*10+b[2];
        int y=b[3]*100+b[4]*10+b[5];
        int z=b[6]*100+b[7]*10+b[8];
        if(x+y==z)++tot;
           // cout<<x<<" "<<y<<" "<<z<<endl;
        return ;///!!!
    }

    for(int i=0;i<n;i++)
    {
        if(book[i]==1)continue;
        book[i]=1;
        b[k]=a[i];
        dfs(k+1);
        book[i]=0;
    }

}

int main()
{
    dfs(0);
    cout<<tot<<endl;
}
