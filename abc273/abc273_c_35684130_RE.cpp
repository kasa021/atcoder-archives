/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35684130
 * Submitted at: 2022-10-15 13:00:08
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_c
 * Result: RE
 * Execution Time: 610 ms
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
      int n;
      cin>>n;
      vector<int> a(200009),b(200009);
      rep(i,n) cin>>a[i];
      map<int,int> mp;
      rep(i,n) b[i]=a[i];
      sort(all(b));
      reverse(all(b));
      
      rep1(i,1,n){
        if(mp[b[i]]!=0) continue;
           mp[b[i]]=mp[b[i-1]]+1;
      }
      if(n==1) mp[b[0]]=1;
      vector<int> ans(200009,0);
      
      rep(i,n){
        ans[mp[a[i]]-1]++;
        // cout<< ans[dp[a[i]]-1] << endl;
        // cout<< dp[a[i]]-1 << endl;
      }
      rep(i,n) cout<< ans[i] << endl;
      
    }