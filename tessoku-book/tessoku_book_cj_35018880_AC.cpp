/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35018880
 * Submitted at: 2022-09-20 15:27:45
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cj
 * Result: AC
 * Execution Time: 206 ms
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
      sort(all(a));
      int q;
      cin>>q;
      rep(i,q){
        int x;
        cin>>x;
        auto s=lower_bound(all(a),x)-a.begin();
        cout<< s << endl;
      }
    }