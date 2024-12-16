#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    float sol = 0;
    vector<float> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sol += p[i];
    }

    cout << sol / p.size() << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    solve(n);

    return 0;
}