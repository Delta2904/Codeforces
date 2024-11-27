#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<pair<int, int>> tram) {
    int capacity = 0, current = 0;

    for (int i = 0; i < n; i++) {
        current += tram[i].second - tram[i].first;
        capacity = max(capacity, current);
    }

    cout << capacity << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> tram(n);
    for (int i = 0; i < n; i++) {
        cin >> tram[i].first;
        cin >> tram[i].second;
    }

    solve(n, tram);

    return 0;
}
