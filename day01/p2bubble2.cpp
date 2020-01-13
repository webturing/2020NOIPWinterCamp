#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
//理解滑窗算法
int main() {
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];

    for(int i=0;i<n;i++){
        //j 0 n-i-2
       for(int j=n-2;j>=i;j--){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
       }

    }



    for (int i = 0; i < n; i++) {
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



