//158A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >>n>>k;
    int a[n];
    // here we are reading teh scores
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //here we are finding teh score of kth place participant
        int kth = a[k - 1];
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= kth && a[i] > 0) {
            score++;
        }
    }
    cout << score;

    return 0;
}