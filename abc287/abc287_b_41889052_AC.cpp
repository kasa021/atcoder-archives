/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc287/submissions/41889052
 * Submitted at: 2023-06-01 09:29:26
 * Problem URL: https://atcoder.jp/contests/abc287/tasks/abc287_b
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
    int n,m,ans=0;
    cin>>n>>m;
    vector<string> s(n),t(m);
    rep(i,n) cin>>s[i];
    rep(i,m) cin>>t[i];
    set<string> st;
    rep(i,m) st.insert(t[i]);
    rep(i,n){
        string str=s[i].substr(3,3);
        if(st.count(str)) ans++;
    }
    cout<<ans<<endl;
}