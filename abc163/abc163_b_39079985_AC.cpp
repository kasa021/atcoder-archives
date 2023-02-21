/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/39079985
 * Submitted at: 2023-02-21 02:48:44
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_b
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
    int n,m;
    cin>>n>>m;
    int sum=0;
    rep(i,m){
        int a;
        cin>>a;
        sum+=a;
    }
    if(n-sum<0)cout<< -1 << endl;
    else cout<< n-sum << endl;
}