/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35003294
 * Submitted at: 2022-09-19 18:43:30
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ce
 * Result: WA
 * Execution Time: 203 ms
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
      for (int i = 0; i < n; i++) cin >> a[i];
      int q; cin>>q;
      vector<int> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
      

      rep(i,q){
        int l,r;
        cin>>l>>r;
        if((l-r+1)/2<csa[r]-csa[l-1]) cout<< "win" << endl;
        else if((l-r-1)/2==csa[r]-csa[l-1]) cout<< "draw" << endl;
        else cout<< "lose" << endl;
      }
      
    }