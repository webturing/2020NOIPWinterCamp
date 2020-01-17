#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> > G;
map<pair<int,int>,int> E;
int n,m;
int F[1000];
void Init(){    for(int i=1;i<=n;i++)F[i]=i;}
int Find(int x){return x==F[x]?x:F[x]=Find(F[x]);}
void Merge(int x,int y){
    int rx=Find(x),ry=Find(y);
    if(rx!=ry)F[rx]=ry;
}

int main()
{
    freopen("te.txt","r",stdin);


    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int from,to,w;
        cin>>from>>to>>w;
        G[from].push_back(to);
        E[{from,to}]=w;
    }

    for(auto g:G)
    {
        int from=g.first;
        for(auto to:g.second)
        {
            cout<<from<<" ->" <<to<<" "<<E[ {from,to}]<<endl;
        }
    }
    vector<pair<int,int>> edges;
    for(auto g:G)
    {
        int from=g.first;
        for(auto to:g.second)
        {
            edges.push_back(make_pair(from,to));
        }
    }
    sort(edges.begin(),edges.end(),[](pair<int,int> a,pair<int,int> b){return E[a]<E[b];});
    Init();
    int weight=0;
    for(auto e:edges)
    {
        if(Find(e.first)==Find(e.second))continue;
        cout<<e.first<<"->"<<e.second<<" selected "<<E[e]<<endl;
        weight+=E[e];
        Merge(e.first,e.second);
    }
    cout<<weight<<endl;
    return 0;
}
