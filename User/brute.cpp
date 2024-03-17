#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int mn = INT_MAX;
    for (auto &x : a) cin >> x, mn = min(x, mn);
    int ans = INT_MAX;
    for (auto x : a) {
        if (x != mn) {
            ans = min(ans, x);
        }
    }
    cout << ans << '\n';
}