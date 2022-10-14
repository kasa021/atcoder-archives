/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35643896
 * Submitted at: 2022-10-14 14:03:01
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_aj
 * Result: AC
 * Execution Time: 7 ms
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
      int n,k;
      cin>>n>>k;
      if(k>=2*n-2 && k%2==0)cout<< "Yes" << endl;
      else cout<< "No" << endl;
    }
