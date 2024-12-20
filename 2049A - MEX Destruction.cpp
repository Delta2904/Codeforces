#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        bool all_zero = true;
        bool has_zero = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] != 0) all_zero = false;
            if (arr[i] == 0) has_zero = true;
        }

        if (all_zero) {
            cout << 0 << "\n";
            continue;
        }

        if (!has_zero) {
            cout << 1 << "\n";
            continue;
        }

        int left = -1, right = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                if (left == -1) left = i;
                right = i;
            }
        }

        bool contains_zero_in_segment = false;
        for (int i = left; i <= right; i++) {
            if (arr[i] == 0) {
                contains_zero_in_segment = true;
                break;
            }
        }

        if (!contains_zero_in_segment) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }

    return 0;
}
