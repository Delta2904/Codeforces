#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int s, int n) {
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> dragons;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        dragons.push({x, y});
    }

    for (int j = 0; j < n; j++) {
        if (dragons.top().first < s) {
            s += dragons.top().second;
            dragons.pop();
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;

    solve(s, n);

    return 0;
}
