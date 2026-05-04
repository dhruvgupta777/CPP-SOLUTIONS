//DIVISION 4 1090
//PROBLEM A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int x;
//         cin >> x;
//         cout << x << "\n";
//     }
//     return 0;
// }

//PROBLEM B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int a[7];
//         for(int i = 0; i < 7; i++) cin >> a[i];

//         int maxVal = *max_element(a, a+7);

//         int sum = 0;
//         for(int i = 0; i < 7; i++) sum += a[i];

      
//         cout << -sum + 2*maxVal << "\n";
//     }
//     return 0;
// } 

//PROBLEM C
    #include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int small = 1;
        int big = n + 1;
        
        for(int i = 0; i < n; i++){
            cout << small << " " << big << " " << big+1 << " ";
            small++;
            big += 2;
        }
        cout << "\n";
    }
    return 0;
}

