#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    vector<int> x(3);
    for (int i = 0; i < 3; i++) cin >> x[i];
    sort(x.begin(), x.end());

    int sol = (x[1] - x[0]) + (x[2] - x[1]);

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
