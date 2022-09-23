/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35067767
 * Submitted at: 2022-09-23 13:04:58
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ag
 * Result: AC
 * Execution Time: 43 ms
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
      vector<int> a(100009);
      rep(i,n) cin>>a[i];

      int xor_sum=a[0];
      rep1(i,1,n) xor_sum=xor_sum^a[i];
      if(xor_sum!=0) cout<< "First" << endl;
      else cout<< "Second" << endl;
    }