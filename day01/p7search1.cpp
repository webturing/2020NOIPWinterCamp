#include<iostream>
#include<algorithm>

using namespace std;
//线性查找
int main()
{
    int a[10]= {1,3,4,5,3,4,1,1.1,2,2};
    int n=10;
    int k=13;
    cout<<find(a,a+n,k)-a<<endl;
    cout<<count(a,a+n,1)<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
/**
 Input:
 10
 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */



