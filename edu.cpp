// A
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// #define pb push_back
// #define f first
// #define s second
// #define all(x) x.begin(),x.end()
// #define rep(i,a,b) for(int i=a;i<b;i++)

// void solve(){
//     int k;
//     cin >> k;
//     vi c(k);

//     rep(i,0,k) cin >> c[i];

//     int maxm = 0, ct2 = 0;

//     rep(i,0,k){

//         maxm = max(maxm , c[i]);
//         if(c[i] >= 2)
//          ct2++;
//     }

//     bool res = (maxm >= 3) || (ct2 >= 2);

//     cout << (res ? "YES" : "NO") << endl;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tt;
//     cin>>tt;
//     while(tt--){
//         solve();
//     }
// }
// B
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
    vi b(n+1);
    rep(i,1,n+1)
     cin >> b[i];

    vector<ll> ct1(n+1,0),ct3(n+1,0);
    rep(i,1,n+1){

        ct1[i] = ct1[i-1]+ (b[i]==1);
        
        ct3[i] = ct3[i-1] + (b[i]==3);
    }

    vector<ll> f(n+1);
    rep(i,0,n+1){
        f[i] = 2*ct3[i] - i;
    }

  
    vector<ll>  minm(n+2, LLONG_MAX);

    for(int j = n- 1; j>=1;j--){

        minm[j] = min(f[j], minm[j+1]);
    }

    bool res = false;
    for(int i = 1; i <= n-2; i++){
        if(2* ct1[i]>= i){
            if(minm[i+1]<= f[i]){
                res=true;
                break;
            }
        }
    }

    cout << (res ?"YES" :"NO") <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
}