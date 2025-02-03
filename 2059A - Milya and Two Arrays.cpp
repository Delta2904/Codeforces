#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    set<int> a;
    set<int> b;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        b.insert(x);
    }

    if (a.size() * b.size() >= 3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
