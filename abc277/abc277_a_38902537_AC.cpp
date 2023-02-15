/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/38902537
 * Submitted at: 2023-02-15 08:22:15
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_a
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    rep(i,n){
        if(a[i]==k)cout<< i+1 << endl;
    }
}