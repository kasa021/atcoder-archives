/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/37649212
 * Submitted at: 2022-12-31 03:48:12
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_d
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;


int h,w,sx,sy,gx,gy;
vector<vector<char>> s(30,vector<char>(30));

vector<vector<int>> bfs(int sx,int sy){
    queue<P> q;
    q.push({sx,sy});
    vector<int> mx = {1,0,-1,0};
    vector<int> my = {0,1,0,-1};
    vector<vector<int>> dist(h+9,vector<int> (w+9,-1));
    dist[sx][sy]=0;
    while(!q.empty()){
        int x,y,nx,ny;
        x=q.front().first,y=q.front().second,q.pop();
        rep(i,4){
            nx=x+mx[i],ny=y+my[i];
            if(nx<0 || nx>=h || ny<0|| ny>=w) continue;
            if(dist[nx][ny]==-1  && s[nx][ny]=='.'){
                dist[nx][ny]=dist[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    return dist;
}


int main(){
    cin>>h>>w;
    rep(i,h){
        rep(j,w){
            cin>>s[i][j];
            if(s[i][j]=='.') sx=i,sy=j;
        }
    }
    //cout<< sx<<" "<<sy << endl;
    auto vec=bfs(sx,sy);
    int now=0;
    rep(i,h){
        rep(j,w){
            //cout<<vec[i][j]<<" ";
            if(now<vec[i][j]){
                now=vec[i][j];
                gx=i;
                gy=j;
            }
        }//cout<<endl;
    }
    auto vec2=bfs(gx,gy);
    int ans=0;
    rep(i,h) rep(j,w)ans=max(ans,vec2[i][j]);
    cout<< ans << endl;
}

