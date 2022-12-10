/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37179131
 * Submitted at: 2022-12-10 13:26:05
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_d
 * Result: WA
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
//typedef modint1000000007 mint;

vector<ll> res;
ll now=0;
void dfs(ll k,ll idx,vector<ll> &a){
    if(k==0) {
        res.push_back(now);
        now-=a[idx-1];
    }
    else if(idx==(int)a.size()) now=0;
    else {
        for(int i=idx;i<(int)a.size();i++){
            if(k>(int)a.size()-1-idx) continue;
        now+=a[i];
        //cout<<"now " <<now <<" "<<"i "<<i <<"  "<<"idx  "<<idx<< endl;
        dfs(k-1,i+1,a);
    }
    now-=a[idx-1];
    }
}

int main(){
      ll n,k,d,idx=0,ans=0;
      cin>>n>>k>>d;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      dfs(k,idx,a);
      bool f=false;
      for(auto v:res){
        if(v%d==0){
            ans=max(ans,v);
            f=true;
        }
      }
      if(f) cout<< ans << endl;
      else cout<< -1 << endl;
      
    }
