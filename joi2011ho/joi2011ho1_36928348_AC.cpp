/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2011ho/submissions/36928348
 * Submitted at: 2022-12-02 10:50:05
 * Problem URL: https://atcoder.jp/contests/joi2011ho/tasks/joi2011ho1
 * Result: AC
 * Execution Time: 277 ms
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
//using mint = modint1000000007;
int main(){
      int n,m,k;
      cin>>n>>m>>k;
      vector<string> field(n);
      rep(i,n) cin>>field[i];
      vector<vector<int>> jangle(n+9,vector<int>(m+9,0)),ice(n+9,vector<int>(m+9,0)),see(n+9,vector<int>(m+9,0));
      rep(i,n){
        rep(j,m){
            if(field[i][j]=='J') jangle[i+1][j+1]=1;
            if(field[i][j]=='I') ice[i+1][j+1]=1;
            if(field[i][j]=='O') see[i+1][j+1]=1;
        }
      }
      

      rep(i,n+7){
        rep(j,m+7){
            jangle[i][j+1]+=jangle[i][j];
            ice[i][j+1]+=ice[i][j];
            see[i][j+1]+=see[i][j];
        }
      }
      

      rep(j,m+7){
        rep(i,n+7){
            jangle[i+1][j]+=jangle[i][j];
            ice[i+1][j]+=ice[i][j];
            see[i+1][j]+=see[i][j];
        }
      }


      rep(i,k){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        
        cout<< jangle[c][d]-jangle[c][b-1]-jangle[a-1][d]+jangle[a-1][b-1] <<" "<<see[c][d]-see[c][b-1]-see[a-1][d]+see[a-1][b-1]<<" "<<ice[c][d]-ice[c][b-1]-ice[a-1][d]+ice[a-1][b-1]<<endl ;
      }

    }