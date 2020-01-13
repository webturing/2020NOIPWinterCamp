#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main() {
   int a[10000];
   int j=0;
   int t;
   while(cin>>t){
        a[j++]=t;
   }
   sort(a,a+j);
}
/**
 Input:

 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */



