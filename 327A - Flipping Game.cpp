#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    int totalOnes = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) totalOnes++;
    }

    int maxSum = -1000; 
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += (a[j] == 0 ? 1 : -1);
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << totalOnes + maxSum << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}