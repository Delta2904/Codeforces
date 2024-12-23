#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    map<string, pair<int, int>> s;
    int sol = 0;

    s["Tetrahedron"].second = 4;
    s["Cube"].second = 6;
    s["Octahedron"].second = 8;
    s["Dodecahedron"].second = 12;
    s["Icosahedron"].second = 20;

    for(int i = 0; i < n; i++) {
        string figure;
        cin >> figure;

        s[figure].first++;
    }

    for (const auto &pos : s) {
        sol += pos.second.first * pos.second.second;
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
