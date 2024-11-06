#include <bits/stdc++.h>
using namespace std;

int solve() {
    int problemSolved = 0, aux;
    for(int i = 0; i <  3; i++) {
        cin >> aux;
        if(aux == 1) {
            problemSolved++;
        } else {
            continue;
        }
    }

    if (problemSolved >= 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, sol = 0;
    cin >> n;

    while(n--) {
        sol += solve();
    }

    cout << sol << endl;

    return 0;
}