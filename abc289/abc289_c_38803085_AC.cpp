/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/38803085
 * Submitted at: 2023-02-11 12:47:51
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_c
 * Result: AC
 * Execution Time: 6 ms
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
    vector<vector<int>> s(m);
    rep(i,m){
        int c;
        cin>>c;
        rep(j,c){
            int a;
            cin>>a;
            s[i].push_back(a);
        }
    }
    int ans=0;
    for(int i=0;i<(1<<m);i++){
        set<int> st;
        rep(j,m){
            if(i & (1<<j)) {
                for(auto v:s[j]) st.insert(v);
            }
        }
        if(st.size()==n) ans++;
    }
    cout<<ans<<endl;
}