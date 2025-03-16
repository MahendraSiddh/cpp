#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>
using namespace std;

using uint = uint32_t;
using ll = int64_t;
using ull = uint64_t;

const ll mod = 998244353;
const ll N = 3 * 1e5 + 1;

#if defined(LOCAL)
#include "_debug.h"
#else
#define clg(...)
#endif


void solve() {
    
}

int32_t main() {
#ifdef CDEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
    }
    return 0;
}