/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc038/submissions/34667611
 * Submitted at: 2022-09-07 05:53:09
 * Problem URL: https://atcoder.jp/contests/abc038/tasks/abc038_c
 * Result: WA
 * Execution Time: 31 ms
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
    vector<int> a(n);
    rep(i,n) cin>>a[i];



      int right = 1,ans=0;
      for (int left = 0; left < n; ++left) {
          while (right < n && (right <= left || a[right-1]<a[right])) {
          
          ++right;
      }
      ans+=right-left;
      }
      cout<<ans<<endl;
    }