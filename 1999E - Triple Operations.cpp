#include <bits/stdc++.h>
using namespace std;
vector<int> prefix(200005);

void solve(int l, int r) {
    int sol = 0;
    
    sol = prefix[r] - prefix[l - 1] + 1 + floor(log2(l) / log2(3));

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    prefix[0] = 0;
    for(int i = 1; i < 200005; i++) {
        prefix[i] = prefix[i - 1] + floor(log2(i) / log2(3)) + 1;
    }

    int t;
    cin >> t;
    
    while(t--) {
        int l, r;
        cin >> l >> r;

        solve(l, r);
    }

    return 0;
}