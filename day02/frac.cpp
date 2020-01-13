#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

struct Frac {
    int up;
    int down;
};

void input(Frac &f) {
    cin >> f.up >> f.down;
    int g = gcd(f.up, f.down);
    f.up /= g;
    f.down /= g;
}

void output(Frac f) {
    cout << f.up << "/" << f.down;
}

void h(int &x) {
    ++x;
}

int main() {
    int x = 3;
    h(x);
    cout << x << endl;

    Frac f;
    input(f);
    output(f);

    return 0;
}