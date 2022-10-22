/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2009yo/submissions/35846966
 * Submitted at: 2022-10-22 03:08:34
 * Problem URL: https://atcoder.jp/contests/joi2009yo/tasks/joi2009yo_d
 * Result: AC
 * Execution Time: 2896 ms
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

int n,m;
int ans=0;
vector<int> mx = {1,0,-1,0};
vector<int> my = {0,1,0,-1};
void dfs(vector<vector<int>> ice,int x,int y,int k){
    if(ice[x][y]==0){
        ans=max(ans,k);
        return ;
    }
    ice[x][y]=0;
    rep(i,4){
        int nx=x+mx[i],ny=y+my[i];
        if(nx<0||nx>=n||ny<0||ny>=m) continue;
        dfs(ice,nx,ny,k+1);
    }
    return ;
}

int main(){
      cin>>m>>n;
      vector<vector<int>> ice(100,vector<int>(100,0));
      rep(i,n)rep(j,m) cin>>ice[i][j];
      rep(i,n){
        rep(j,m){
            dfs(ice,i,j,0);
        }
      }
      cout<< ans << endl;
    }