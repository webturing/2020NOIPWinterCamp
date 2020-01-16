#include<bits/stdc++.h>
using namespace std;

int a[8]= {0,1,2,3,4,5,6,7};
int q[8];
int n=8;
int book[8];

void dfs(int k)//16ms
{
    if(k>=n)
    {
        int flag=1;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
            {
                if(abs(q[i]-q[j])==(j-i))
                    flag=0;
            }
        if(flag)
        {
            for(int i=0; i<n; i++)
                cout<<q[i];
            cout<<endl;
        }
        return ;
    }
    for(int i=0; i<n; i++)
    {
        if(book[i]==1)
            continue;
        book[i]=1;
        q[k]=a[i];
        dfs(k+1);
        book[i]=0;
    }
}

int main()
{
    dfs(0);
    return 0;
}
