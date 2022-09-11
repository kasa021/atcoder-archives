/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34774199
 * Submitted at: 2022-09-11 04:16:34
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_c
 * Result: AC
 * Execution Time: 55 ms
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
      int n,ans=0;
      cin>>n;
      int p[n],cnt[n]={0};
      rep(i,n) cin>>p[i];
      rep(i,n){
        rep(j,3){
            cnt[(p[i]-i+n-1+j)%n]++;
        }
      }
      rep(i,n) ans=max(ans,cnt[i]);
      cout<<ans<<endl;
    }