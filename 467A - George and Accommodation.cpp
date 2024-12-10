#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<pair<int, int>> rooms(n);
    int sol = 0;
    for (int i = 0; i < n; i++) {
        cin >> rooms[i].first >> rooms[i].second;
        if (rooms[i].second - rooms[i].first >= 2) {
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