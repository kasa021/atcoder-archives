/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35003459
 * Submitted at: 2022-09-19 19:27:52
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_g
 * Result: AC
 * Execution Time: 163 ms
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
      cin>>d>>n;
      vector<int> b(100009),ans(100009);
      rep(i,n){
        int l,r;
        cin>>l>>r;
        b[l]++;
        b[r+1]--;
      }
      ans[0]=0;
      rep1(i,1,d+1) ans[i]=ans[i-1]+b[i];
      rep1(i,1,d+1) cout<< ans[i] << endl;
    }