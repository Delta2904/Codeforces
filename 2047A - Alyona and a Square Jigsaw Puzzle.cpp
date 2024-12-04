#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
const int MOD = 1e9+7;
const int INF = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;

vector<int> squaresize;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void precompute_squaresizes() {
    ll layer = 0;
    ll total_pieces = 1;
    squaresize.push_back(1);
    while (total_pieces <= 10000) {
        layer++;
        total_pieces += 8 * layer;
        squaresize.push_back(total_pieces);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    ll count = 0;
    int sol = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        count += a[i];
        if (binary_search(squaresize.begin(), squaresize.end(), count)) {
            sol++;
        }
    }
    cout << sol << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute_squaresizes();

    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}
