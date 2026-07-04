// AtCoder Beginner Contest 465

// A
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     long long A, B;
//     cin >> A >> B;
//     if (3*A > 2*B) 
//     cout << "Yes" << endl;
//     else
//     cout << "No" << endl;
  
//     return 0;
// }


// B
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  X, Y, L, R, A, B;
    
    cin >> X >> Y >> L >> R >> A >> B;
    
    long long int  total = 0;
    
    
    for (long long int i = A; i< B; i++){
        
        if (i >= L && i < R)
        
        total += X;
        
        else total += Y;
    }
    cout << total << endl;
    return 0;
}