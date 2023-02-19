/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc290/submissions/39010206
 * Submitted at: 2023-02-19 12:01:21
 * Problem URL: https://atcoder.jp/contests/abc290/tasks/abc290_a
 * Result: AC
 * Execution Time: 4 ms
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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int ans=0;
    rep(i,m){
        int b;
        cin>>b;
        b--;
        ans+=a[b];
    }
    cout<< ans << endl;
}