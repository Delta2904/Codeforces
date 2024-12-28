#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n, 0);

    for(int i = 0; i < n; i++){
        int mn = INT_MAX, mx = INT_MIN;
        for(int j = i; j >= 0; j--){
            mn = min(mn, a[j]);
            mx = max(mx, a[j]);

            if(2LL * mn > mx){
                if(j == 0) {
                    dp[i] += 1;
                } else {
                    dp[i] += dp[j - 1];
                }

                if(dp[i] >= 2){
                    dp[i] = 2;
                    break; 
                }
            } 
            else {
                break;
            }
        }
    }

    if(dp[n - 1] >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
