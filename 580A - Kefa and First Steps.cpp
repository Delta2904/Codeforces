#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    int maxSegment = -1, newSegment = 1;
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i - 1] <= a[i]) {
            newSegment++;
        } else {
            maxSegment = max(newSegment, maxSegment);
            newSegment = 1;
        }
    }
    maxSegment = max(newSegment, maxSegment);
    cout << maxSegment << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
