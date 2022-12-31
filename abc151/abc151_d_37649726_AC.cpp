/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/37649726
 * Submitted at: 2022-12-31 04:18:49
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_d
 * Result: AC
 * Execution Time: 10 ms
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

int bfs(int sx,int sy){
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
    int res=0;
    rep(i,h){
        rep(j,w){
            res=max(res,dist[i][j]);
        }
    }
    
    return res;
}


int main(){
    cin>>h>>w;
    vector<P> list;
    rep(i,h){
        rep(j,w){
            cin>>s[i][j];
            if(s[i][j]=='.') list.push_back({i,j});
        }
    }
    int ans=0;
    for(auto [p,q]: list){
        ans=max(ans,bfs(p,q));
    }
    cout<< ans << endl;

}

