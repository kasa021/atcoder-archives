/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/36933954
 * Submitted at: 2022-12-02 17:37:06
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_c
 * Result: WA
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
      ll n,m;
      cin>>n>>m;
      vector<ll> p(m),y(m);
      rep(i,m) cin>>p[i]>>y[i];
      map<int ,set<int>> mp;
      rep(i,m){
        mp[p[i]].insert(y[i]);
      }
      rep(i,m){
        string s,t;
        int idx=distance(mp[p[i]].begin(),mp[p[i]].lower_bound(y[i]))+1;
        //cout<< idx << endl;
        while(p[i]>0){
            s+='0'+p[i]%10;
            p[i]/=10;
        }
        while((int)s.size()<6){
            s='0'+s;
        }
        while(idx>0){
            t+='0'+idx%10;
            idx/=10;
        }
        while((int)t.size()<6){
            t='0'+t;
        }
        cout<< s<<t << endl;
      }
    }
