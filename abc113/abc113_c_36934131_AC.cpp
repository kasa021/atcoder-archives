/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/36934131
 * Submitted at: 2022-12-02 18:03:46
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_c
 * Result: AC
 * Execution Time: 1333 ms
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
      vector<vector<int>>  mp(n+9);
      rep(i,m){
        mp[p[i]].push_back(y[i]);
      }
      rep1(i,1,n+1) sort(all(mp[i]));
    //   rep1(i,1,n+1){
    //     for(auto v:mp[i]) cout<< v << " ";
    //     cout<<endl;
    //   }
      rep(i,m){
        string s,t;
        vector<int> vec=mp[p[i]];
        int idx=lower_bound(all(vec),y[i])-vec.begin()+1;
        //cout<< idx << endl;
        while(p[i]>0){
            s+='0'+p[i]%10;
            p[i]/=10;
        }
        reverse(all(s));
        while((int)s.size()<6){
            s='0'+s;
        }
        while(idx>0){
            t+='0'+idx%10;
            idx/=10;
        }reverse(all(t));
        while((int)t.size()<6){
            t='0'+t;
        }
        cout<< s<<t << endl;
      }
    }
