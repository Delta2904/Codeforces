#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int l, int r) {
    vector<int> a;
    for (int i = l; i <=r; i++) a.push_back(i);
    int odd = 0;
    
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 1) {
            odd++;
        }
    }

    cout << odd / 2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        solve(l, r);
    }

    return 0;
}
