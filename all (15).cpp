// 1113 A
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
    string s;
    cin >> s;
    int n = s.size();

    string bt;
    bool fd= false;

    rep(i,0,n){
        if (s[i]!='0') 
        continue;
      
        string t1 = s.substr(0,i) + s.substr(i+1);

        string bb;
        bool bf = false;
        rep(j,0,(int)t1.size()){
            if (t1[j] != '1') 
            continue;
            string t2 = t1.substr(0,j)+t1.substr(j+1);
            if (!bf||t2<bb){
                bb = t2;
                bf=true;
            }
        }

        if (!fd||bb>bt){
            bt=bb;
            fd=true;
        }
    }

    cout<<bt<<endl;
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