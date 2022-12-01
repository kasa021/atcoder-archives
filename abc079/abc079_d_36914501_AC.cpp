/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/36914501
 * Submitted at: 2022-12-01 12:35:05
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_d
 * Result: AC
 * Execution Time: 13 ms
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
      int h,w,ans=0;
      cin>>h>>w;
      vector<vector<int>> c(10,vector<int>(10,0)),a(h,vector<int> (w,0));
      rep(i,10)rep(j,10) cin>>c[i][j];
      rep(i,h)rep(j,w) cin>>a[i][j];
      rep(k,10){
         rep(i,10){
             rep(j,10){
                 c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
              }
          }
      }
      rep(i,h){
        rep(j,w){
            if(a[i][j]==-1)continue;
            else ans+=c[a[i][j]][1];
        }
      }
      cout<< ans << endl;
    }
