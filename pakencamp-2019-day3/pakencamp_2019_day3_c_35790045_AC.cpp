/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/pakencamp-2019-day3/submissions/35790045
 * Submitted at: 2022-10-19 12:19:11
 * Problem URL: https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c
 * Result: AC
 * Execution Time: 11 ms
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
      int n,m;
      cin>>n>>m;
      vector<vector<int>> a(n+9,vector<int>(m+9,0));
      rep(i,n){
        rep(j,m){
            cin>>a[i][j];
        }
      }
      ll ans=0;
      rep(i,m-1){
        rep1(j,i+1,m){
            ll sum=0;
            rep(l,n){
                sum+=max(a[l][i],a[l][j]);
            }
            ans=max(ans,sum);
        }
      }
      cout<< ans << endl;
    }