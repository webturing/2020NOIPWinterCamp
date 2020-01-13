#include<iostream>
#include<algorithm>

using namespace std;
//重点理解有序列表的合并算法
int main()
{
    int a[5]= {1,2,5,7,9};
    int b[5]= {1,3,16,18,20};
    int c[10]= {0};
    int la=5,lb=5;
    int j=0,i=0,k=0;
    while(i<la&&j<lb)
    {
        if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<la)c[k++]=a[i++];
    while(j<lb)c[k++]=b[j++];

    for(int i=0; i<10; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

}
/**
 Input:
 10
 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */



