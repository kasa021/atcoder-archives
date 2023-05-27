/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc303/submissions/41733522
 * Submitted at: 2023-05-27 12:08:31
 * Problem URL: https://atcoder.jp/contests/abc303/tasks/abc303_b
 * Result: AC
 * Execution Time: 15 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

int main(){
      int n,m;
      cin>>n>>m;
      vector<vector<int>> a(m,vector<int>(n));
      rep(i,m)rep(j,n)cin>>a[i][j];
      set<P> st;
      rep(i,m){
        rep(j,n-1){
            st.insert(P(min(a[i][j],a[i][j+1]),max(a[i][j],a[i][j+1]))); // 重複を許さない
        }
      }
      int cnt=n*(n-1)/2-st.size();
        cout<<cnt<<endl;
    }