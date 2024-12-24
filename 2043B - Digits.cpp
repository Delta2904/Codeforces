#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll factorial_small(int n) {
    if (n == 2) return 2LL;
    if (n == 3) return 6LL;
    if (n == 4) return 24LL;
    if (n == 5) return 120LL;
    
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        int d;
        cin >> n >> d;

        vector<int> divisores;
        divisores.push_back(1);

        if(n >= 3) {
            divisores.push_back(3);
        } else {
            if( (2LL * d) % 3 == 0 ){
                divisores.push_back(3);
            }
        }

        if(d == 5) {
            divisores.push_back(5);
        }

        if(n > 2) {
            divisores.push_back(7);
        } else {
            if((11LL * d) % 7 == 0) {
                divisores.push_back(7);
            }
        }

        if(n >= 6) {
            divisores.push_back(9);
        } else {
            long long f = factorial_small(n);
            long long sum_digits = f * d;
            if(sum_digits % 9 == 0) {
                divisores.push_back(9);
            }
        }

        for (int x : divisores) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
