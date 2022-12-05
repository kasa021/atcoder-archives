/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc069/submissions/37040693
 * Submitted at: 2022-12-05 10:27:09
 * Problem URL: https://atcoder.jp/contests/abc069/tasks/arc080_b
 * Result: AC
 * Execution Time: 19 ms
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
//typedef modint1000000007 mint;

int main(){
      int h,w,n;
      cin>>h>>w>>n;
      vector<int> a(n+9);
      rep1(i,1,n+1) cin>>a[i];
      vector<vector<int>> ans(h+9,vector<int> (w+9,0));
      ans[0][0]=1;
      a[1]--;
      queue<P> q;
      q.push(P(0,0));
      vector<int> mx = {1,0,-1,0};
      vector<int> my = {0,1,0,-1};
      
      rep1(i,1,n+1){
        rep(j,a[i]){
          int x,y;
          x=q.front().first; y=q.front().second;
          q.pop();
          bool f=false;
          rep(k,4){
            if(f) continue;
            int nx,ny;
            nx=x+mx[k]; ny=y+my[k];
            if(nx<0 || nx>=h || ny<0 ||ny>=w) continue;
            if(ans[nx][ny]!=0) continue;
            else {
                ans[nx][ny]=i;
                q.push(P(nx,ny));
                f=true;
            }
          }
        }
      }
      rep(l,h){
        rep(m,w) cout<< ans[l][m] << " ";
        cout<<endl;
      }

    }
