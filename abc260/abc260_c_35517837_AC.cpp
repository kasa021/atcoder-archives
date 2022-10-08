/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/35517837
 * Submitted at: 2022-10-08 17:18:24
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_c
 * Result: AC
 * Execution Time: 6 ms
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
      ll n,x,y;
      cin>>n>>x>>y;
      vector<ll> r(n+1,0),b(n+1,0);
      r[n]=1;
      for(int i=n;i>0;i--){
        r[i-1]=(1+x)*r[i]+b[i];
        b[i-1]=x*y*r[i]+y*b[i];
        
      }
      cout<< b[1] << endl;
    }