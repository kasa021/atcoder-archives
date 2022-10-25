/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/35966473
 * Submitted at: 2022-10-25 15:29:17
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_b
 * Result: AC
 * Execution Time: 8 ms
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
      vector<int> a(n),b(n+2);
      rep(i,n) cin>>a[i];
      b[0]=a[0];
      b[n]=0;
      b[n+1]=360;
      rep1(i,1,n) b[i]=(b[i-1]+a[i])%360;
      sort(all(b));
      int ans=0;
      rep1(i,1,n+2){
        ans=max(ans,b[i]-b[i-1]);
      }
      cout<< ans << endl;
    }
