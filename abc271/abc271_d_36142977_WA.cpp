/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/36142977
 * Submitted at: 2022-11-01 15:26:50
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_d
 * Result: WA
 * Execution Time: 2207 ms
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
using P = pair<bool,string>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      int n,m;
      cin>>n>>m;
      map<int,string> dp;
      
      vector<int> a(n),b(n);
      rep(i,n) cin>>a[i]>>b[i];
      queue<int> q;
      if(m>=a[0])dp[a[0]]="H",q.push(a[0]);
      if(m>=b[0])dp[b[0]]="T",q.push(b[0]);
    //   cout<< '0' << endl;
    //   rep1(i,1,m+1){
    //     cout<< i<<" "<<dp[i] << endl;
    //   }cout << endl;
      rep1(i,1,n){
        int size=q.size();
        //cout<< i << endl;
        rep(j,size){
            int s=q.front();
            q.pop();
            if(m>=a[i]+s&&(int)dp[s].size()==i) dp[a[i]+s]=dp[s]+"H",q.push(s+a[i]);
            if(m>=b[i]+s&&(int)dp[s].size()==i) dp[b[i]+s]=dp[s]+"T",q.push(s+b[i]);
        }
    //    rep1(j,1,m+1){
    //     cout<< j<<" "<<dp[j] << endl;
    //   }cout << endl;
      }
      if((int)dp[m].size()==n){
        cout<< "Yes" << endl;
        cout<< dp[m] << endl;
        return 0;
      }
      cout<< "No" << endl;
    //   rep1(i,1,m+1){
    //     cout<< i<<" "<<dp[i] << endl;
    //   }
    }