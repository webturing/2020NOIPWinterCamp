#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL heap[1000010];
int n;

void Insert(int x)
{
    if (x < 1)
        return;
    if (heap[x/2] > heap[x])
    {
        swap(heap[x/2], heap[x]);
        Insert(x/2);
    }
    return;
}

void update(int x)
{
    if (x > n)
        return;
    int p = x;
    int l = 2*x, r = 2*x+1;
    if (l <= n && heap[l] < heap[p])
        p = l;
    if (r <= n && heap[r] < heap[p])
        p = r;
    swap(heap[p], heap[x]);
    if (p != x)
        update(p);
    return;
}

void build()
{
    for (int i = n/2;i >= 1;i--)
        update(i);
}

LL top()
{
    return heap[1];
}

void pop()
{
    heap[1] = heap[n];
    n--;
    update(1);
}

int main()
{
    scanf("%d", &n);
    for (int i = 1;i <= n;i++)
        scanf("%lld", &heap[i]);
    build();
    LL sum = 0;
    while(n>1)
    {
        LL a = top();
        pop();
        LL b = top();
        pop();
        sum += (a+b);
        n++;
        heap[n] = a+b;
        Insert(n);
    }
    printf("%lld\n", sum);

    return 0;
}
