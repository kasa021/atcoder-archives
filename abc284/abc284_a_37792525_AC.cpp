/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37792525
 * Submitted at: 2023-01-07 12:01:28
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_a
 * Result: AC
 * Execution Time: 8 ms
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
    int n;
    cin>>n;
    vector<string> a(n);
    rep(i,n) cin>>a[i];
    for(int i=n-1;i>=0;i--)cout<< a[i] << endl;
}
