/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37361548
 * Submitted at: 2022-12-17 14:30:32
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_d
 * Result: AC
 * Execution Time: 208 ms
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
      cin>>n>>m;
      dsu uf(n+9);
      graph g(200009);
      rep(i,m){
        ll a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
        uf.merge(a,b);
      }

      vector<ll> c(200009,-1);
      bool f=true;
      rep1(i,1,n+1){
        if(c[i]!=-1) continue;
        queue<ll> q;
            c[i]=0;
            q.push(i);
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
     ll ans=0,d=0;
      map<ll,vector<ll>> black,white;
      rep1(i,1,n+1){
        d=uf.leader(i);
        if(c[i]==0) black[d].push_back(i);
        else if(c[i]==1) white[d].push_back(i);
      }
      rep1(i,1,n+1){
        d=uf.leader(i);
        if(c[i]==0){
            ans+=(ll)white[d].size()-(ll)g[i].size();
            ans+=n-uf.size(i);
        }else{
            ans+=(ll)black[d].size()-(ll)g[i].size();
            ans+=n-uf.size(i);
        }
      }
      
      
      cout<< ans/2 << endl;

    }
