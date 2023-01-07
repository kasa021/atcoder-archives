/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37797607
 * Submitted at: 2023-01-07 12:03:14
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_b
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int t;
    cin>>t;
    rep(i,t){
        int n;
        cin>>n;
        vector<int> a(n);
        rep(i,n) cin>>a[i];
        int ans=0;
        rep(i,n){
            if(a[i]%2==1) ans++;
        }
        cout<< ans << endl;
    }
}
