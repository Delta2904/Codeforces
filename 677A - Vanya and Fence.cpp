#include <bits/stdc++.h>
using namespace std;

void solve(int n, int h, vector<int> a) {
    int width = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > h) {
            width += 2;
        } else {
            width++;
        }
    }

    cout << width << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    solve(n, h, a);

    return 0;
}
