#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

//统计关键字的次数
int main() {
    int a[5] = {1, 1, 6, 3, 3};
    int b[10];///book
    //memset(b,0,sizeof(b));
    fill(b, b + 10, 0);
    for (int i = 0; i < 5; i++)
        b[a[i]]++;


    for (int i = 0; i < 10; i++) {
        if (b[i] != 0)
            for (int j = 0; j < b[i]; j++)
                cout << i << " ";
    }
}




