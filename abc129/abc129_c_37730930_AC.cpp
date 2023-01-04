/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc129/submissions/37730930
 * Submitted at: 2023-01-04 10:08:14
 * Problem URL: https://atcoder.jp/contests/abc129/tasks/abc129_c
 * Result: AC
 * Execution Time: 59 ms
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
using mint = modint1000000007;
int main()
{
    int n,m;
    cin>>n>>m;
    set<int> st;
    rep(i,m){
        int a;
        cin>>a;
        st.insert(a);
    }
    vector<mint> dp(n+9);
    dp[0]=1;
    if(!st.count(1))dp[1]=1;
    rep1(i,2,n+1){
        if(!st.count(i)) dp[i]=dp[i-1]+dp[i-2];
    }
    cout<< dp[n].val() << endl;
}
