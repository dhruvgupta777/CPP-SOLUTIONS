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
//     int k,z;
//     cin>>k>> z;

//     if(k% z==0) cout  <<"YES\n";
    
    
//     else cout<<"NO\n";
    
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


// PROBLEM B

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
    ll a;
    cin>>a;

    int k=0;
    ll temp=a;
    while(temp>0){
        k++;
        temp/=10;
    }

    ll y=1;
    rep(i,0,k) y*=10;
    y+=1;

    cout<<y<<"\n";
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
//     int n;
//     string str;
//     cin>>n>>str;

//     if(n==1){
//         cout<<1<<"\n";
//         return;
//     }

//     vector<vector<int>> dp(n, vector<int>(n,0));
//     rep(i,0,n){
//         dp[i][i] = 1<<(str[i]-'0');
//     }

//     for(int len=2; len<=n; len++){
//         for(int l=0; l+len-1<n; l++){
//             int r=l+len-1;
//             int val=0;
//             for(int m=l; m<r; m++){
//                 int common = dp[l][m] & dp[m+1][r];
//                 if(common) val |= common;
//             }
//             dp[l][r]=val;
//         }
//     }

//     cout<<(dp[0][n-1] ? 1 : 2)<<"\n";
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }