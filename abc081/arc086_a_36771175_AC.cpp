/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc081/submissions/36771175
 * Submitted at: 2022-11-25 09:15:13
 * Problem URL: https://atcoder.jp/contests/abc081/tasks/arc086_a
 * Result: AC
 * Execution Time: 141 ms
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

int main(){
      int n,k,a,ans=0;
      cin>>n>>k;
      map<int,int> mp;
      priority_queue<P,vector<P>,greater<P>> q;
      rep(i,n){
        cin>>a;
        mp[a]++;
      }
      for(auto [i,v]:mp){
        //cout<< i<<" "<<v << endl;
        q.push(P(v,i));
      }

      while((int)q.size()>k){
        auto [v,i]=q.top();
        q.pop();
        ans+=v;
      }
      
      cout<< ans << endl;
    }