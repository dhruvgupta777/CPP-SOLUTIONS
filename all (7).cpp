//1109
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
        string s;    //l =longest one  and cu is current linefor # line
        cin>>s;
        int l=0;
        int cu=0;
        for(char c: s){
            if(c=='#') {
            cu++; 
             l= max(l, cu); }
            else
            cu=0;
            
        }
        cout << (l+1)/2 << endl;
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