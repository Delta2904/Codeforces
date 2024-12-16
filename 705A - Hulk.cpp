#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (i == n) {
                cout << "I love" << " ";
                break;
            }
            cout << "I love" << " ";
        } else {
            if (i == n) {
                cout << "I hate" << " ";
                break;
            }
            cout << "I hate" << " ";
        } 
        cout << "that" << " ";
    }
    cout << "it";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}