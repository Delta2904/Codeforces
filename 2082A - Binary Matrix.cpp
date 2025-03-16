#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        string fila;
        cin >> fila;
        for (int j = 0; j < m; j++) {
            matrix[i][j] = fila[j] - '0';
        }
    }

    int pairow = 0, paircol = 0;

    for (int i = 0; i < n; i++) {
        int ones = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 1) ones++;
        }
        if (ones % 2 != 0) pairow++;
    }

    for (int j = 0; j < m; j++) {
        int ones = 0;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 1) ones++;
        }
        if (ones % 2 != 0) paircol++;
    }

    cout << max (pairow, paircol) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }

    return 0;
}
