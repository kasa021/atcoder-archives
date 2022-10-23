/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/35927220
 * Submitted at: 2022-10-23 15:46:49
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_d
 * Result: AC
 * Execution Time: 17 ms
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

vector<int> mx = {-1,-1,0,0,1,1};
vector<int> my = {-1,0,-1,1,0,1};
int n;
vector<vector<bool>> g(2009,vector<bool>(2009,false)),seen(2009,vector<bool> (2009,false));

void dfs(int x,int y){
  seen[x][y]=true;
  rep(i,6){
    int nx=x+mx[i],ny=y+my[i];
    if(nx<0||nx>2000||ny<0||ny>2000) continue;
    if(seen[nx][ny]||!g[nx][ny]) continue;
    dfs(nx,ny);
  }
}

int main(){
      cin>>n;
      
      rep(i,n){
        int a,b;
        cin>>a>>b;
        g[a+1000][b+1000]=true;
      }

      int ans=0;
      rep(i,2001){
        rep(j,2001){
          if(!g[i][j]||seen[i][j]) continue;
          dfs(i,j);
          ans++;
        }
      }
      
      cout<< ans << endl;
    }