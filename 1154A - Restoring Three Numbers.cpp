#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    vector<int> x(4);
    for (int i = 0; i < 4; i++) cin >> x[i];
    sort(x.begin(), x.end());

    int c = x[3] - x[0];
    cout << c << " ";
    int b = x[3] - x[1];
    cout << b << " ";
    int a = x[3] - x[2];
    cout << a << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
