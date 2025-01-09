#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    cin >> a[0];
    int mx, mn, prevmx, prevmn, sol = 0;
    mx = mn = prevmx = prevmn = a[0];

    for (int i = 1; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
        if (prevmx != mx) {
            sol++;
            prevmx = a[i];
        } else if (prevmn != mn) {
            sol++;
            prevmn = a[i];
        }
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
