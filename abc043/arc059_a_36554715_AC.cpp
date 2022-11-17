/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc043/submissions/36554715
 * Submitted at: 2022-11-17 11:13:16
 * Problem URL: https://atcoder.jp/contests/abc043/tasks/arc059_a
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
      int n,ans=INT_MAX;
      cin>>n;
      vector<int> a(n);
      rep(i,n)cin>>a[i];
      for(int j=-100;j<=100;j++){
        int now=0;
        rep(i,n){
            now+=(j-a[i])*(j-a[i]);
        }
        ans=min(ans,now);
        }
        cout<< ans << endl;
    }