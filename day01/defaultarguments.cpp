#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>

using namespace std;

int Max(int x = 0, int y = 0) {
    if (x > y)
        return x;
    return y;
}

double Max(double x, double y) {
    return 9999;
}

//char* Max(char*x,char*y){
//    return strcmp(x,y)>0?x:y;
//}
string Max(string x, string y) {
    cerr << "string::Max" << endl;
    return x > y ? x : y;
}

int main() {
    cout << Max() << endl;
    cout << Max(1) << endl;
    cout << Max(1, 2) << endl;
    cout << Max(1.0, 2.0) << endl;
    cout << Max("hello", "world") << endl;

    return 0;
}
