/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc140/submissions/41304613
 * Submitted at: 2023-05-11 09:40:19
 * Problem URL: https://atcoder.jp/contests/abc140/tasks/abc140_b
 * Result: AC
 * Execution Time: 9 ms
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
      int prev=-1,ans=0;
      vector<int> a(n),b(n),c(n);
      rep(i,n) cin>>a[i],a[i]--;
      rep(i,n) cin>>b[i];
      rep(i,n-1) cin>>c[i];

      rep(i,n){
        ans+=b[a[i]];
        if(prev==a[i]-1)ans+=c[prev];
        prev=a[i];
      }
      cout<< ans << endl;
    }
    