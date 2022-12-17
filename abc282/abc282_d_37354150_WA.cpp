/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37354150
 * Submitted at: 2022-12-17 13:25:59
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_d
 * Result: WA
 * Execution Time: 160 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;
//typedef modll1000000007 mll;




int main(){
      ll n,m;
      ll ans=0;
      cin>>n>>m;
      set<ll> solo;
      graph g(200009);
      rep(i,m){
        ll a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      rep1(i,1,n+1){
        sort(all(g[i]));
        if(g[i].size()==0) solo.insert(i);
      }

      vector<ll> c(200009,-1);
      bool f=true;
      rep1(i,1,n+1){
        if(c[i]!=-1) continue;
        queue<ll> q;
        if(!solo.count(i)){
            c[i]=0;
            q.push(i);
        }
        while(!q.empty()){
            ll v=q.front();q.pop();
            for(auto nv:g[v]){
                if(c[nv]!=-1){
                    if(c[nv]==c[v]) f=false;
                    continue;
                }
                c[nv]=1-c[v];
                q.push(nv);
            }
        }
      }
      if(!f){
        cout<< 0 << endl;
        //cout<< "ans" << endl;
        return 0;
      }
     
      vector<ll> black,white;
      rep1(i,1,n+1){
        if(c[i]==0) white.push_back(i);
        else if(c[i]==1)black.push_back(i);
      }
      
      for(auto v:white){
        ll size=(ll)g[v].size();
        ans+=(ll)black.size()-size;
        //cout<< v<<" "<<ans << endl;
      }
      ans+=(n-1)*(ll)solo.size();
      ans-=((ll)solo.size()*((ll)solo.size()-1ll))/2ll;
      cout<< ans << endl;

    }
