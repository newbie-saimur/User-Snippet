#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;

void solve()
{
    int n; cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n);
    cout << a[1] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int test = 1;
    // cin >> test;
    for (_ = 1; _ <= test; _++)
    {
        solve();
    }
    return 0;
}