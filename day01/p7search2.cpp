#include<iostream>
#include<algorithm>

using namespace std;
//二分查找算法
int main() {
   int a[]={1,1,2,2,2,2,2,2,2,2,2,2,3,4,16,16,100,677,5000};
   int n=sizeof(a)/sizeof(a[0]);
   int k=16;
   int left=0,right=n-1;
   int flag=0;
   while(left<=right){
        int mid=(left+right)/2;
        if(k==a[mid]){
            flag=1;
            break;
        }
        if(k>a[mid]){
            left=mid+1;
        }else{
            right=mid-1;
        }
   }
    cout<<flag<<endl;
    cout<<binary_search(a,a+n,k)<<endl;


}
/**
 Input:
 10
 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */



