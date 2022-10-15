/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/35659484
 * Submitted at: 2022-10-15 11:00:45
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_b
 * Result: AC
 * Execution Time: 10 ms
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
      int h,w;
      cin>>h>>w;
      vector<vector<ll>> a(h,vector<ll>(w,0));
      rep(i,h) rep(j,w) cin>>a[i][j];
      bool f=true;
      rep(i1,h-1){
        rep1(i2,i1+1,h){
            rep(j1,w-1){
                rep1(j2,j1+1,w){
                    if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2]) f=false;
                }
            }
        }
      }
      cout << (f ? "Yes" : "No") << endl;
    }