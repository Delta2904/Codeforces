#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> p(n);
    for (int i = 1; i <= n; i++) {
        int pos;
        cin >> pos;

        p[pos - 1] = i;
    }

    for (int j = 0; j < n; j++) {
        cout << p[j] << " ";
    }
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