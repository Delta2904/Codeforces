#include <bits/stdc++.h>
using namespace std;

void solve(int y, string year) {
    for (int i = y + 1; i <= INT_MAX; i++) {
        set<char> a;
        for (int j = 0; j < 4; j++) {
            a.insert(year[j]);
        }
        if (a.size() == 4) {
            cout << i << endl;
            return;
        }
        year = to_string(i + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y;
    cin >> y;
    string year = to_string(y + 1);

    solve(y, year);

    return 0;
}
