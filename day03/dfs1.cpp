#include<bits/stdc++.h>
using namespace std;
int n=4;
int a[21]={1,2,3,4};
int b[4]={0};
int book[21];

void dfs(int k)
{
    if(k>=n){
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        return ;
    }
   for(int i=0;i<n;i++){
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
    return 0;


}
