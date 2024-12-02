#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 1) {
            cout << "HARD" << endl;
            return;
        }
    }

    cout << "EASY" << endl;
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
