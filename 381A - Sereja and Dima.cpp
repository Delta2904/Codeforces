#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int c = 0, b = n - 1, i = 1, sereja = 0, dima = 0;

    while (i <= n) {
        if (i % 2 == 0) {
            if (a[b] >= a[c]) {
                dima += a[b];
                b--;
            } else {
                dima += a[c];
                c++;
            }
        } else {
            if (a[b] >= a[c]) {
                sereja += a[b];
                b--;
            } else {
                sereja += a[c];
                c++;
            }
        }
        i++;
    }

    cout << sereja << " " << dima << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    solve(n);

    return 0;
}
