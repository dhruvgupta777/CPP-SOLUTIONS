//A1112
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

        ll me = 0;  //me = max even and mo is max odd
        ll mo = LLONG_MAX;

        rep(i,1,n+1) {
            ll x;
            cin >>x;

            if (i % 2 == 1)
                mo = min(mo,x);
            else
                me= max(me,x);
        }

        if (n % 2 == 1) {
            cout << "no\n";
        } else {
            if (mo >me + 1)
                cout <<"Yes\n";
            else
                cout <<"NO\n";
        }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}