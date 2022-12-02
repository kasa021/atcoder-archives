/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/36933152
 * Submitted at: 2022-12-02 16:05:20
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_d
 * Result: AC
 * Execution Time: 41 ms
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
//typedef modint1000000007 mint;
int main(){
      int n,x,y;
      cin>>n>>x>>y;
      x--,y--;
      vector<vector<int>> g(n+9,vector<int>(n+9,0));
      rep(i,n){
        rep(j,n){
            g[i][j]=abs(i-j);
        }
      }
      rep(i,n){
        rep(j,n){
            if(i==j) continue;
            if(i<=x && j>x) g[i][j]=min(g[i][j],abs(x-i)+abs(y-j)+1);
            else if(x<i && i<y){
                if(j<i) g[i][j]=min(g[i][j],abs(i-y)+1+abs(j-x));
                else g[i][j]=min(g[i][j],abs(i-x)+1+abs(y-j));
            }else if(i>=y && j<y){
                g[i][j]=min(g[i][j],abs(i-y)+1+abs(x-j));
            }
        }
      }
      vector<int> ans(n);
      rep(i,n){
        rep(j,n){
            ans[g[i][j]]++;
        }
      }
      rep1(i,1,n) cout<< ans[i]/2 << endl;

    }
