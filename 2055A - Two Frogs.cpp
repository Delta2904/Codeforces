#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int a, int b) {
    if ((a - b) == 0) {
        cout << "NO" << endl;
    } else if ((a - b) % 2 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        solve(n, a, b);
    }

    return 0;
}
