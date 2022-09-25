/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35154444
 * Submitted at: 2022-09-25 05:41:57
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/abc007_3
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
      int r,c,sx,sy,gx,gy;
      cin>>r>>c>>sx>>sy>>gx>>gy;
      sx--;
      sy--;
      gx--;
      gy--;
      vector<string> g(r+9);
      rep(i,r) cin>>g[i];

      queue<int> qx,qy;
      graph dist(r+9,vector<int>(c+9,-1));
      dist[sx][sy]=0;
      qx.push(sx); qy.push(sy);
      vector<int> mx = {1,0,-1,0};
      vector<int> my = {0,1,0,-1};
      while(!qx.empty()){
        int x=qx.front(),y=qy.front();
        qx.pop(); qy.pop();
        rep(i,4){
            int nx=x+mx[i];
            int ny=y+my[i];
            if(g[nx][ny]=='.'&&dist[nx][ny]==-1){
                dist[nx][ny]=dist[x][y]+1;
                qx.push(nx);
                qy.push(ny);
            }
        }
      }
      cout<< dist[gx][gy] << endl;
      
    }