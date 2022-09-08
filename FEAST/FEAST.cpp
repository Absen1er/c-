#include <bits/stdc++.h>

using namespace std;

bool f[5000001][2];

int main() {
    freopen("FEAST.inp","r",stdin);
    freopen("FEAST.out","w",stdout);
    int a, b, t;
    cin >> t >> a >> b;
    f[0][0] = 1;
    for (int i = max(a, b); i <= t; i++) {
        if (f[i - a][0] || f[i - b][0]) f[i][0] = true;
        if (f[i][0] == true) f[i / 2][1] = true;
        if (f[i - a][1] || f[i - b][1]) f[i][1] = true;
    }
    int result = 0;
    for (int i = 1; i <= t; i++) {
        if (f[i][1]) {
            result = max(result, i);
        }
    }
    cout << result;
    return 0;
}