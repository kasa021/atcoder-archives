/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35036789
 * Submitted at: 2022-09-21 16:28:50
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_dr
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
      ll a,b,c;
      cin>>a>>b>>c;
      if(a+b+c==0) cout<< "Yes" << endl;
      else cout<< "No" << endl;
    }