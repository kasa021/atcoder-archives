/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35008386
 * Submitted at: 2022-09-20 05:43:34
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cg
 * Result: AC
 * Execution Time: 290 ms
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
      vector<vector<int>> t(1509,vector<int>(1509,0)),z(1509,vector<int>(1509,0));
      rep(i,n){
        int x,y;
        cin>>x>>y;
        t[y][x]++;
      } 
      rep1(i,1,1509)rep1(j,1,1509){
        z[i][j]=z[i][j-1]+t[i][j];
      }
      rep1(i,1,1509) rep1(j,1,1509){
        z[j][i]+=z[j-1][i];
      }
      int q;
      cin>>q;
      rep(i,q){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<< z[d][c]+z[b-1][a-1]-z[d][a-1]-z[b-1][c] << endl;
      }
    }
