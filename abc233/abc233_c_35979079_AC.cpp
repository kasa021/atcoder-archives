/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/35979079
 * Submitted at: 2022-10-26 10:27:08
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_c
 * Result: AC
 * Execution Time: 29 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

ll n,x;
vector<vector<ll>> a;
ll ans=0;

void dfs(ll indx,ll seki){
    if(indx==n){
        if(seki==x) ans++;
        return;
    }

    for(ll v:a[indx]){
        if(seki>x/v) continue;
        dfs(indx+1,seki*v);
    }
}
int main(){
    cin>>n>>x;
    a.resize(n);
    rep(i,n){
        ll l;
        cin>>l;
        a[i].resize(l);
        rep(j,l){
            cin>>a[i][j];
        }
    }
    dfs(0,1);
    cout<< ans << endl;
}