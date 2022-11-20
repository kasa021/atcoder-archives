/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/36681668
 * Submitted at: 2022-11-20 13:44:30
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_c
 * Result: AC
 * Execution Time: 54 ms
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
      int n,m=100009,M=0;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      int ans=0;
      rep(l,n){
        int x=a[l];
        rep1(r,l,n){
            x=min(x,a[r]);
            ans=max(ans,x*(r-l+1));
        }
      }
      cout<< ans << endl;
    }