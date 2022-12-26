/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/37564156
 * Submitted at: 2022-12-26 12:21:01
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_d
 * Result: AC
 * Execution Time: 50 ms
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

ll dist(ll a,ll b ,ll c,ll d){
  return (a-c)*(a-c)+(b-d)*(b-d);
}

int main(){
  dsu d(3009);
  int n,sx,sy,tx,ty;
  cin>>n>>sx>>sy>>tx>>ty;
  vector<ll> x(n),y(n),r(n);
  rep(i,n) cin>>x[i]>>y[i]>>r[i];
  rep(i,n-1){
    rep1(j,i+1,n){
      ll r1=(r[i]+r[j])*(r[i]+r[j]),r2=(r[i]-r[j])*(r[i]-r[j]),dis=dist(x[i],y[i],x[j],y[j]);
      if(dis>=r2 && dis<=r1) d.merge(i,j);
    }
  }

  int s=-1,t=-1;
  rep(i,n){
    if(dist(x[i],y[i],sx,sy)==r[i]*r[i]) s=i;
    if(dist(x[i],y[i],tx,ty)==r[i]*r[i]) t=i;
  }

  if(s==-1 || t==-1){
    cout<< "No" << endl;
  }else {
    if(d.same(s,t))cout<< "Yes" << endl;
    else cout<< "No" << endl;
  }

}