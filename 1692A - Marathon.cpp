#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> a) {
    int sol = 0;

    for (int i = 0; i < 4; i++) {
        if (a[0] < a[i]) sol++;
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> a(4);
        for (int i = 0; i < 4; i++) cin >> a[i];

        solve(a);
    }

    return 0;
}
