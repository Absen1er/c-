#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        int a1, b1, c1, a2, b2, c2;
        std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        int d = a1 * b2 - a2 * b1, dx = c1 * b2 - c2 * b1, dy = a1 * c2 - a2 * c1;
        if (d == 0) {
            if (dx + dy == 0) std::cout << "INFINITE\n";
            else std::cout << "NO SOLUTION\n";
        } else {
            if (dx % d == 0 && dy % d == 0) std::cout << dx / d << " " << dy / d << '\n';
            else std::cout << "NO SOLUTION\n";
        }
    }
    return 0;
}