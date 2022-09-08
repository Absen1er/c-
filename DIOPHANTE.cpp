#include <bits/stdc++.h>

std::pair<int, int> solveDiophante(int a, int b, int c) {
    for (int i = 0; i * a <= c; i++) {
        int j = (c - (a * i)) / b;
        if (a * i + b * j == c) {
            return {i, j};
        }
    }
}

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b) std::swap(a, b);
    int ucln = gcd(a, b);
    if (c % ucln != 0) {
        std::cout << 0;
        return 0;
    }
    std::pair<int, int> p = solveDiophante(a, b, c);
    int x0 = p.first, y0 = p.second;
    int range1 = (-x0 * ucln) / b, range2 = (y0 * ucln) / a;
    int res = range2 - range1 + 1;
    if (c % a == 0) res--;
    if (c % b == 0) res--;
    std::cout << res;
    return 0;
}