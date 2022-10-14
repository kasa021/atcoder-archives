/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35644400
 * Submitted at: 2022-10-14 14:31:18
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_al
 * Result: WA
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
      int d,n;
      cin>>n>>d;
      vector<int> l(n),r(n),h(n),limit(n+9,24);
      rep(i,n)cin>>l[i]>>r[i]>>h[i];
      rep(i,n){
        rep1(j,l[i],r[i]+1) limit[j]=min(limit[j],h[i]);
      }

      int ans=0;
      rep1(i,1,n+1) ans+=limit[i];
      cout<< ans << endl;
    }