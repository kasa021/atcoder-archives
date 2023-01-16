/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/38096563
 * Submitted at: 2023-01-16 08:51:05
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_c
 * Result: AC
 * Execution Time: 16 ms
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
typedef modint1000000007 mint;
int main()
{
    int n;
    cin>>n;
    mint a=1,b=1,c=1;
    rep(i,n) a*=10;
    rep(i,n) b*=9;
    rep(i,n) c*=8;
    cout<< (a-2*b+c).val() << endl;
}
