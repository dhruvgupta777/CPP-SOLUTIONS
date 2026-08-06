//Boss Fight  1115 d2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve(){
    int n;
    cin >> n;
    vi a(n);
    map<int,int> freq;
    ll total = 0;
    rep(i,0,n){
        cin >> a[i];
        freq[a[i]]++;
        total += a[i];
    }

    int x = -1, mx = 0;
    for(auto &p : freq){
        if(p.s > mx){
            mx = p.s;
            x = p.f;
        }
    }

    ll ans;
    if(2LL * mx <= n + 1){
        ans = total;
    } else {
        ll os = total - (ll)mx * x;
        ans = os+ (ll)x *(n - mx + 2);
    }  // os other sum 

    cout << ans << "\n";
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}