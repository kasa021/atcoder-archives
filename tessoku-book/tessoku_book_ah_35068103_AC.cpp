/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35068103
 * Submitted at: 2022-09-23 13:20:57
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ah
 * Result: AC
 * Execution Time: 34 ms
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
      int n,x,y,a[100009];
      int g[100009];
      cin>>n>>x>>y;
      rep(i,n) cin>>a[i];

      rep(i,100000+1){
        bool t[3]={false,false,false};
        if(i>=x) t[g[i-x]] = true;
        if(i>=y) t[g[i-y]]= true;
        if(!t[0]) g[i]=0;
        else if(!t[1]) g[i]=1;
        else g[i]=2;
      }

      int xor_sum=0;
      rep(i,n) xor_sum=xor_sum^g[a[i]];
      if(xor_sum!=0) cout<< "First" << endl;
      else cout<< "Second" << endl;
    }