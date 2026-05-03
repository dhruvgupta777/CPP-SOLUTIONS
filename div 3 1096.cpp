//CODEFORCES DIV 3 CONTEST 1096

// PROBLEM A
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, y;
//         cin >> x >> y;
        
//         if (x % 2 == 1 && y % 2 == 1)
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }
//     return 0;
// }

// PROBLEM B 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s;
        
//         int open = count(s.begin(), s.end(), '(');
//         int close = n - open;
        
//         if (n % 2 == 0 && open == close)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

// PROBLEM  C
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> div6, div2, div3, neither;
        
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             bool by2 = (x % 2 == 0);
//             bool by3 = (x % 3 == 0);
//             if (by2 && by3)       div6.push_back(x);
//             else if (by2)         div2.push_back(x);
//             else if (by3)         div3.push_back(x);
//             else                  neither.push_back(x);
//         }
        
//         // div6, div2, neither, div3
//         for (int x : div6)    cout << x << " ";
//         for (int x : div2)    cout << x << " ";
//         for (int x : neither) cout << x << " ";
//         for (int x : div3)    cout << x << " ";
//         cout << "\n";
//     }
//     return 0;
// }


