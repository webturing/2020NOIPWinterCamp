#include<bits/stdc++.h>
using namespace std;

void debug(string s,int *a,int n)
{
    cout<<s<<":";
    for(int i=0; i<n; i++)
    {

        cout<<a[i]<<" ";

    }
    cout<<endl;
}

int main()
{

    int a[10];
    fill(a,a+10,0);
    int t;
    while(cin>>t)
    {
        a[t]++;



    }

    debug("a=",a,10);


    return 0;
}
