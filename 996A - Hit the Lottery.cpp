#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    int sol = 0;
    while(n){
        if(n >= 100) {
            sol += n / 100;
            n %= 100;
        } else if (n >= 20) {
            sol += n / 20;
            n %= 20;
        } else if (n >= 10) {
            sol += n / 10;
            n %= 10;
        } else if (n >= 5) {
            sol += n / 5;
            n %= 5;
        } else {
            sol += n;
            n = 0;
        }
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