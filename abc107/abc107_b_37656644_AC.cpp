/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/37656644
 * Submitted at: 2022-12-31 09:20:19
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/abc107_b
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
    int h,w;
    cin>>h>>w;
    vector<string> a(h);
    vector<bool> vir(h,true),li(w,true);
    rep(i,h) cin>>a[i];
    rep(i,h){
        bool f=true;
        rep(j,w){
            if(a[i][j]!='.') f=false;
        }
        if(f) vir[i]=false;
    }
    rep(i,w){
        bool f=true;
        rep(j,h){
            if(a[j][i]!='.') f=false;
        }
        if(f) li[i]=false;
    }
    vector<string> ans;
    rep(i,h){
        if(!vir[i]) continue;
        rep(j,w){
            if(!li[j]) continue;
            cout<< a[i][j];
        }cout<<endl;
    }
}
