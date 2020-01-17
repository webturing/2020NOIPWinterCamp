#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
const int MAXN = 510;
bool maps[MAXN][MAXN];
int out[MAXN];
int in[MAXN];
int main() {
  while (cin >> n >> m) {
    memset(in, 0, sizeof(in));
    memset(maps, false, sizeof(maps));
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      if (maps[x][y] == false) {
        maps[x][y] = true;
        in[y]++;
      }
    }
    int cnt = 0;
    while (cnt < n) {
      int j = -1;
      for (int i = 1; i <= n; i++) {
        if (in[i] == 0) {
          out[cnt++] = i;
          in[i] = -1;
          j = i;
          break;
        }
      }
      for (int i = 1; i <= n; i++) {
        if (maps[j][i] == true) {
          in[i]--;
          maps[j][i] = false;
        }
      }
    }
    cout << out[0];
    for (int i = 1; i < cnt; i++) {
      cout << " " << out[i];
    }
    cout << endl;
  }
}
