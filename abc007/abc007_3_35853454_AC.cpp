/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc007/submissions/35853454
 * Submitted at: 2022-10-22 06:03:01
 * Problem URL: https://atcoder.jp/contests/abc007/tasks/abc007_3
 * Result: AC
 * Execution Time: 7 ms
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
      int r,c,sy,sx,gy,gx;
      cin>>r>>c>>sy>>sx>>gy>>gx;
      sy--;sx--;gy--;gx--;
      vector<vector<char>> m(59,vector<char>(59,'#'));
      vector<vector<int>> dist(59,vector<int>(59,-1));
      dist[sy][sx]=0;
      rep(i,r) rep(j,c) cin>>m[i][j];
      vector<int> mx = {1,0,-1,0};
      vector<int> my = {0,1,0,-1};
      queue<P> q;
      q.push(P(sy,sx));
      while(!q.empty()){
        auto v=q.front();
        q.pop();
        rep(i,4){
            int ny=v.first+my[i],nx=v.second+mx[i];
            if(m[ny][nx]!='#' && dist[ny][nx]==-1){
                dist[ny][nx]=dist[v.first][v.second]+1;
                q.push(P(ny,nx));
            }
        }
      }
      cout<< dist[gy][gx] << endl;
      
    }