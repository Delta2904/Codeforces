#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    set<int> suffix;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = n-1; i >= 0; i--) {
        suffix.insert(a[i]);
        a[i] = (int)suffix.size();
    }
    
    for(int i = 0; i < m; i++ )
    {
        int l;
        cin >> l;
        l--;
        cout << a[l] << endl;
    }
    
    return 0;
}
