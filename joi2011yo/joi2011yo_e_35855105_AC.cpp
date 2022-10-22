/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2011yo/submissions/35855105
 * Submitted at: 2022-10-22 07:07:26
 * Problem URL: https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e
 * Result: AC
 * Execution Time: 99 ms
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
      int h,w,n;
      cin>>h>>w>>n;
      string field[h];
      rep(i,h) cin>>field[i];
      int sy,sx;
      vector<P> number(n+1);
      rep(i,h){
        rep(j,w){
            
            if(field[i][j]=='S'){
                number[0]=P(i,j);
            }else {
                rep(k,n){
                if(field[i][j]==char(k+'1')){
                    number[k+1]=P(i,j);
                }
                } 
        }
      }
      }
      
      int ans=0;
      rep(i,n){
        vector<vector<int>> cnt(1009,vector<int>(1009,-1));
        queue<P> q;
        q.push(number[i]);
        vector<int> mx = {1,0,-1,0};
        vector<int> my = {0,1,0,-1};
        bool f=false;
        cnt[number[i].first][number[i].second]=0;
        while(!q.empty()){
            auto v=q.front();
            q.pop();
            rep(j,4){
                int ny=my[j]+v.first,nx=mx[j]+v.second;
                if(ny<0||ny>=h||nx<0||nx>=w) continue;
                if(field[ny][nx]!='X' && cnt[ny][nx]==-1){
                    cnt[ny][nx]=cnt[v.first][v.second]+1;
                    q.push(P(ny,nx));
                }
            }
        }
        ans+=cnt[number[i+1].first][number[i+1].second];
      }
      cout<< ans << endl;
    }