#include<iostream>
using namespace std;
const int n=5;
//#define n 5
int a[n]={1,2,3,4,5};
int book[n]={0};
int target=10;
void print(){
    int s=0;
    for(int i=0;i<n;i++){
         //   cout<<book[i]<<" ";
        if(book[i]==1){
            s+=a[i];
        }
    }
    //cout<<endl;
    if(s!=target)return ;
    for(int i=0;i<n;i++){
        if(book[i]==1){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
void dfs(int k){
    if(k>n)return ;
    if(k==n){
        print();
    }
    book[k]=0;//不选择a[k]
    dfs(k+1);
    book[k]=1;//选择了a[k]
    dfs(k+1);

}

int main()//n!
{
    dfs(0);
    return 0;
}
