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
 cin>>n;
 int a=n+1;
 bool prime = true;
 for(int i=2;i*i<=a;i++){
     if(a%i==0)
     prime =false;
 }
 
 if(prime){
     cout <<"Yes"<<endl;
 }
 else cout <<"no"<<endl;
 
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