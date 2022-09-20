/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35008194
 * Submitted at: 2022-09-20 05:29:52
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_h
 * Result: AC
 * Execution Time: 456 ms
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
      int h,w;
      cin>>h>>w;
      vector<vector<int>> p(1509,vector<int>(1509,0)),r(1509,vector<int>(1509,0));
      rep1(i,1,h+1) rep1(j,1,w+1) cin>>p[i][j];
    
      rep1(i,1,h+1) rep1(j,1,w+1){
        r[i][j]=r[i][j-1]+p[i][j];
      }
      rep1(i,1,w+1) rep1(j,1,h+1){
        r[j][i]+=r[j-1][i];
      }


      int q;
      cin>>q;
      rep(i,q){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        //a--,b--,c--,d--;
        cout<< r[c][d]+r[a-1][b-1]-r[a-1][d]-r[c][b-1] << endl;
      }
    }