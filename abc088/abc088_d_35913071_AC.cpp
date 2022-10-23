/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/35913071
 * Submitted at: 2022-10-23 04:45:27
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_d
 * Result: AC
 * Execution Time: 8 ms
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
      int h,w,white=0;
      cin>>h>>w;
      string s[h];
      rep(i,h) cin>>s[i];
      rep(i,h){
        rep(j,w){
            if(s[i][j]=='.') white++;
        }
      }
      //cout<< white << endl;
      vector<vector<int>> dist(100,vector<int> (100,-1));
      vector<int> mx = {1,0,-1,0};
      vector<int> my = {0,1,0,-1};
      dist[0][0]=0;
      queue<P> q;
      q.push(P(0,0));
      while(!q.empty()){
        auto v=q.front();
        q.pop();
        rep(i,4){
            int ny=v.first+my[i],nx=v.second+mx[i];
            if(ny<0||ny>=h||nx<0||nx>=w) continue;
            if(dist[ny][nx]==-1 && s[ny][nx]=='.') {
                dist[ny][nx]=+dist[v.first][v.second]+1;
                q.push(P(ny,nx));
            }
        }
      }
      if(dist[h-1][w-1]==-1)cout<< "-1" << endl;
      else cout<< white-dist[h-1][w-1]-1 << endl;
    //   rep(i,h){
    //     rep(j,w){
    //         cout<<dist[i][j]<<" ";
    //     }cout<<endl;
    //   }
    //   rep(i,h){
    //     rep(j,w){
    //         cout<<s[i][j]<<" ";
    //     }cout<<endl;
    //   }
    }