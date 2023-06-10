/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42149875
 * Submitted at: 2023-06-10 12:54:29
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_d
 * Result: AC
 * Execution Time: 838 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n;
    cin >> n;
    map<ll, ll> mp;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
        if (i == 0) continue;
        if (i % 2 == 1) {
            mp[a[i]] = mp[a[i - 1]];
        }
        else {
            mp[a[i]] = mp[a[i - 1]] + (a[i] - a[i - 1]);
        }
    }
    // for(auto v: mp){
    //     cout << v.first << " " << v.second << endl;
    // }
    int q;
    cin >> q;
    rep(_, q) {
        int l, r;
        cin >> l >> r;
        auto itr1 = lower_bound(all(a), l);
        auto itr2 = lower_bound(all(a), r);
        // cout << *itr1 << " " << *(itr2 - 1) << endl;
        ll ans = (mp[*(itr2 - 1)] - mp[*itr1]);
        ll dis1 = itr1 - a.begin();
        ll dis2 = itr2 - a.begin();
        if (dis1 % 2 == 0) ans += *itr1 - l;
        if (dis2 % 2 == 0) ans += r - *(itr2 - 1);
        cout << ans << endl;
        // cout << mp[*itr2] - mp[*itr1] << endl;
    }
}