1109C
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
    int n, x, y;
    cin >> n >> x >> y;
    vi p(n + 1);
    rep(i,1,n+1)
        cin >> p[i];

    vector<vi> graph(n + 1);
    vi com(n + 1, -1);

    rep(i,1,n+1){
        if (i + x <= n) {
            graph[i].pb(i + x);
            graph[i + x].pb(i);
        }
        if (i + y <= n) {
            graph[i].pb(i + y);
            graph[i + y].pb(i);
        }
    }

    int id = 0;
    rep(i,1,n+1){
        if (com[i] == -1) {
            stack<int> sta;
            sta.push(i);
            com[i] = id;
            while (!sta.empty()) {
                int u = sta.top(); sta.pop();
                for (int v : graph[u]) {
                    if (com[v] == -1) {
                        com[v] = id;
                        sta.push(v);
                    }
                }
            }
            id++;
        }
    }

    rep(i,1,n+1){
        if (com[i] != com[p[i]]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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