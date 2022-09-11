/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/atc001/submissions/34778281
 * Submitted at: 2022-09-11 07:36:18
 * Problem URL: https://atcoder.jp/contests/atc001/tasks/dfs_a
 * Result: WA
 * Execution Time: 26 ms
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

int h,w;
vector<int> mx = {1,0,-1,0};
vector<int> my = {0,1,0,-1};
vector<string> c(505);
vector<vector<bool>> reached(505,vector<bool>(505,false));
bool frag=false;

void dfs(int x,int y){
    if(frag) return ;
    reached[x][y]=true;
    rep(i,4){
        if(frag) return;
        int nx=x+mx[i],ny=y+my[i];
        if(nx<0||h<=nx||ny<0||w<=ny||c[nx][ny]=='#'||reached[nx][ny]) continue;
        if(c[nx][ny]=='g'){
            frag=true;
            return;
        }
        dfs(nx,ny);
    }
}


int main(){
      int x,y;
      cin>>h>>w;
      rep(i,h) cin>>c[i];
      rep(i,h) {
        rep(j,w){
            if(c[i][j]=='s') 
            x=i;
            y=j;
        }
      }
      dfs(x,y);
      cout << (frag ? "Yes" : "No") << endl;

      
    }