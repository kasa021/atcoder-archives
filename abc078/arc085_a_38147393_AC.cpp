/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc078/submissions/38147393
 * Submitted at: 2023-01-19 04:13:39
 * Problem URL: https://atcoder.jp/contests/abc078/tasks/arc085_a
 * Result: AC
 * Execution Time: 7 ms
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
    int n,m;
    cin>>n>>m;
    int time=1900*m+100*(n-m);
    int x=1;
    rep(i,m) x*=2;
    int ans=time*x;
    cout<< ans << endl;
}
