#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int price, int coin) {
    int shovels, i = 1;

    while (true) {
        shovels = i * price;
        if (shovels % 10 == 0 || shovels % 10 == coin) {
            cout << i << endl;
            return;
        } 
        i++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, r;
    cin >> k >> r;

    solve(k, r);

    return 0;
}
