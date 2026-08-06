#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int z = 0, o = 0;
    for (char c : s) {
        if (c == '0') z++;
        else o++;
    }

    int ans = 1e9;

    auto go = [&](char st) {
        char cur = st;
        int kz = 0, ko = 0;

        int dz = z;
        int d1 = o;

        if (abs(dz - d1) <= 1)
            ans = min(ans, dz + d1);

        for (char c : s) {
            if (c == cur) {
                if (c == '0') kz++;
                else ko++;

                cur = (cur == '0') ? '1' : '0';

                dz = z - kz;
                d1 = o - ko;

                if (abs(dz - d1) <= 1)
                    ans = min(ans, dz + d1);
            }
        }
    };

    go('0');
    go('1');

    if (ans == 1e9) cout << -1 << "\n";
    else cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}