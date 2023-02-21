/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/39080029
 * Submitted at: 2023-02-21 02:51:24
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_c
 * Result: AC
 * Execution Time: 336 ms
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
    int n;
    cin>>n;
    vector<int> ans(n);
    rep(i,n-1){
        int a;
        cin>>a;
        a--;
        ans[a]++;
    }
    rep(i,n)cout<< ans[i] << endl;
}