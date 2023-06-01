/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/41889738
 * Submitted at: 2023-06-01 10:04:01
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_c
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
    vector<set<int>> st(m);
    rep(i,m){
        int num=0;
        cin>>num;
        rep(j,num){
            int a;
            cin>>a;
            st[i].insert(a);
        }
    }
    set<int> S;
    int ans=0;
    rep(i,(1<<m)){
        S.clear();
        rep(j,m){
            if(i&(1<<j)){
                for(auto x:st[j]) S.insert(x);
            }
        }
        if(S.size()==n){
            ans++;
        }
    }
    cout<<ans<<endl;
}