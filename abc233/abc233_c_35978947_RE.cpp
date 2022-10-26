/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/35978947
 * Submitted at: 2022-10-26 10:19:26
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_c
 * Result: RE
 * Execution Time: 108 ms
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
vector<vector<int>> a(n+9);
ll ans=0;

void dfs(ll indx,ll seki){
    if(indx==n){
        if(seki==x) ans++;
        return;
    }

    for(ll v:a[indx]){
        if(seki*v>x) continue;
        dfs(indx+1,seki*v);
    }
}
int main(){
    cin>>n>>x;
    rep(i,n){
        int l;
        cin>>l;
        rep(j,l){
            int b;
            cin>>b;
            a[i].push_back(b);
        }
    }
    dfs(0,1);
    cout<< ans << endl;
}