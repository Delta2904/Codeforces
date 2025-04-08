#include <bits/stdc++.h>
using namespace std;

void solve(int n, int x) {
    priority_queue<int> a;
    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        a.push(b);
    }

    int team = 0, sol = 0;
    for (int i = 0; i < n; i++) {
        team++;
        int min = a.top();
        if (min*team >= x) {
            sol++;
            team = 0;
        }
        a.pop();
    }

    cout << sol << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        solve(n, x);
    }

    return 0;
}
