#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b) {
    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    solve(a, b);

    return 0;
}