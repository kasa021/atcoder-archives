/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37346561
 * Submitted at: 2022-12-17 12:50:43
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_d
 * Result: RE
 * Execution Time: 2206 ms
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
//typedef modint1000000007 mint;




int main(){
      int n,m;
      ll ans=0;
      cin>>n>>m;
      set<int> solo;
      graph g(n+9);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      rep1(i,1,n+1){
        sort(all(g[i]));
        if(g[i].size()==0) solo.insert(i);
      }

      vector<int> c(n+9,-1);
      bool f=true;
      rep1(i,1,n+1){
        if(c[i]!=-1) continue;
        queue<int> q;
        if(!solo.count(i)){
            c[i]=0;
            q.push(i);
        }
        while(!q.empty()){
            int v=q.front();q.pop();
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
        return 0;
      }

      vector<int> black,white;
      rep1(i,1,n+1){
        if(c[i]==0) white.push_back(i);
        else black.push_back(i);
      }
      //cout<< (int)solo.size() << endl;
      for(auto v:white){
        for(auto nv:black){
            auto exs=*lower_bound(all(g[nv]),v);
            if(exs!=v) ans++;
        }
      }
      ans+=(n-1)*(int)solo.size();
      cout<< ans << endl;

    }
