/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41042196
 * Submitted at: 2023-04-29 12:57:39
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_c
 * Result: AC
 * Execution Time: 47 ms
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

int h, w;
vector<string> s(109);
vector<int> mx = {1,1,-1,-1};
vector<int> my = {1,-1,1,-1};

int dfs(int x,int y,vector<int> &sz,vector<vector<bool>> &seen){
    seen[x][y]=true;
    // cout<< size.size() << endl;
    rep(i,4){
        int nx=x+mx[i],ny=y+my[i];
        if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
        if(s[nx][ny]=='#' && !seen[nx][ny]){
            sz[i]++;
            seen[nx][ny]=true;
            dfs(nx,ny,sz,seen);
        }
    }
    int res=sz[0];
    bool f=true;
    rep(i,4) if(res!=sz[i]) f=false;
    if(f) return res;
    else return -1;
}

int main(){
      cin>>h>>w;
      vector<int> ans(1000);
      
      rep(i,h) cin>>s[i];
      rep(i,h){
        rep(j,w){
            if(s[i][j]=='#'){
                vector<int> sz(4);
                vector<vector<bool>> seen(109,vector<bool>(109,false));
                int res=dfs(i,j,sz,seen);
                if(res!=-1) ans[res-1]++;
            }
        }
      }
      rep(i,min(h,w)) cout<< ans[i] <<" ";
      cout<<endl;
    }