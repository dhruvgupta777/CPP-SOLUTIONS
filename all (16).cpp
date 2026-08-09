// A 1116 (Div. 2)
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef pair<int, int> pii;
// typedef vector<int> vi;

// #define pb push_back
// #define f first
// #define s second
// #define all(x) x.begin(),x.end()
// #define rep(i,a,b) for(int i=a;i<b;i++)

// void solve() {
//     ll a, b, c;
//     cin >> a >> b >> c;

//     while (true) {
//         // Sort a <= b <= c
//         if (a > b) swap(a, b);
//         if (b > c) swap(b, c);
//         if (a > b) swap(a, b);

//         // Can't improve the range anymore
//         if (c <= a + b)
//             break;

//         // Replace largest number with sum of other two
//         c = a + b;
//     }

//     cout << c - a << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//         solve();

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

#define pb push_back
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> v = {a, b, c};
    sort(all(v));

    a = v[0];
    b = v[1];
    c = v[2];

    if (c > a + b)
        cout << b << "\n";
    else
        cout << c - a << "\n";
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