#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int sol = 1;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] != a[i - 1]) {
            sol++;
        } 
    }

    cout << sol << endl;
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