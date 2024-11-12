#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> matrix(5, vector<int>(5));

void solve() {
    int sol = 0;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                sol = abs(i - 2) + abs(j - 2);
            }
        }
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}