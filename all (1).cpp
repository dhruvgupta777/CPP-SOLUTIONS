#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int64> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // b is given too, but in the easy version bi = ai
        for (int i = 0; i < n; ++i) {
            int64 x;
            cin >> x;
        }

        int ans = 0;

        for (int i = 0; i < n; ++i) {
            int64 need;
            if (n == 1) {
                need = a[i];
            } else if (i == 0) {
                need = std::gcd(a[0], a[1]);
            } else if (i == n - 1) {
                need = std::gcd(a[n - 2], a[n - 1]);
            } else {
                int64 x = std::gcd(a[i - 1], a[i]);
                int64 y = std::gcd(a[i], a[i + 1]);
                int64 g = std::gcd(x, y);
                need = (x / g) * y;   // lcm(x, y)
            }

            if (need < a[i]) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
