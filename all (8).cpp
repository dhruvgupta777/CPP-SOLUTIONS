//1109 B
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair < int, int > pii;
typedef vector < int > vi;
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)

    void solve() {
        int n;
        cin >> n;
        vector < ll > a(n);
        rep(i, 0, n)
        cin >> a[i];

        ll nt = 1;
        rep(i, 0, n - 1) {
            if (a[i] < nt) {
                cout << "no" << endl;
                return;
            }
            a[i + 1] += a[i] - nt;
            nt++;
        }

        if (a[n - 1] >= nt)
            cout << "yes" << endl;

        else cout << "no" << endl;

    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}