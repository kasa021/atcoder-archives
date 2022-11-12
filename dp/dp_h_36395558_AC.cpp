/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36395558
 * Submitted at: 2022-11-12 03:53:11
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_h
 * Result: AC
 * Execution Time: 53 ms
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
using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

const ll mod=1e9+7;

int main(){
  ll h,w;
  cin>>h>>w;
  vector<vector<ll>> dp(h+9,vector<ll>(w+9,0));
  dp[0][0]=1;
  vector<string> s(h);
  rep(i,h) cin>>s[i];
  
  queue<P> q;
  vector<int> mx = {1,0};
  vector<int> my = {0,1};
  q.push(P(0,0));
  while(!q.empty()){
    auto [x,y]=q.front();
    q.pop();
    rep(i,2){
      int nx=x+mx[i],ny=y+my[i];
      if(nx>=h||ny>=w) continue;
      if(s[nx][ny]=='#'||dp[nx][ny]>0)continue;
      if(nx==0 || ny==0)dp[nx][ny]=dp[x][y];
      else dp[nx][ny]=(dp[nx-1][ny]+dp[nx][ny-1])%mod;
      q.push(P(nx,ny));
    }
  }
  cout<< dp[h-1][w-1] << endl;
  }