/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/35977952
 * Submitted at: 2022-10-26 09:14:47
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_c
 * Result: RE
 * Execution Time: 2251 ms
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
int n,x;
vector<vector<ll>> a(n+9);
ll ans=0;
void dfs(ll c,ll indx){
    if(indx==n && c==x){
        ans++;
        return;
    }
    for(ll v:a[indx]){
        if(c*v>x) continue;
        dfs(c*v,indx+1);
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

      
      dfs(1,0);
      cout<< ans << endl;
    }