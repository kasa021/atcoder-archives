/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/38445666
 * Submitted at: 2023-01-29 07:54:44
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_d
 * Result: WA
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int h,w,sx,sy;
    cin>>h>>w;
    vector<vector<char>> s(h,vector<char>(w));
    rep(i,h){
        rep(j,w){
            cin>>s[i][j];
            if(s[i][j]=='.'){
                sx=i,sy=j;
            }
        }
    }
    int maxi=0;
    queue<P> q;
    q.push(P(sx,sy));
    vector<int> mx = {1,0,-1,0};
    vector<int> my = {0,1,0,-1};
    vector<vector<int>> dist(h,vector<int>(w,-1));
    dist[sx][sy]=0;
    while(!q.empty()){
        int x,y;
        x=q.front().first,y=q.front().second;
        q.pop();
        rep(i,4){
            int nx,ny;
            nx=x+mx[i],ny=y+my[i];
            if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
            if(s[nx][ny]=='#' || dist[nx][ny]!=-1) continue;
            dist[nx][ny]=dist[x][y]+1;
            sx=nx,sy=ny;
            q.push(P(nx,ny));
        }
    }
    //cout<<sx<<" "<<sy<<endl;
    int ans=0;
    q.push(P(sx,sy));
    vector<vector<int>> dist1(h,vector<int>(w,-1));
    dist1[sx][sy]=0;
    while(!q.empty()){
        int x,y;
        x=q.front().first,y=q.front().second;
        q.pop();
        rep(i,4){
            int nx,ny;
            nx=x+mx[i],ny=y+my[i];
            if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
            if(s[nx][ny]=='#' || dist1[nx][ny]!=-1) continue;
            dist1[nx][ny]=dist1[x][y]+1;
            ans=dist1[nx][ny];
            q.push(P(nx,ny));
        }
    }

    cout<< ans << endl;

    

    }
