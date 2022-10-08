/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35517451
 * Submitted at: 2022-10-08 16:53:01
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_d
 * Result: AC
 * Execution Time: 477 ms
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
      int n,m;
      cin>>n>>m;
      vector<vector<int>> a(409,vector<int>(409,-1));
      queue<P> q;
      q.push(P(1,1));
      a[1][1]=0;
      while(!q.empty()){
        int x,y;
        x=q.front().first;
        y=q.front().second;
        q.pop();
        rep1(i,1,n+1){
            double d=sqrt(m-(i-x)*(i-x));
            if(d==floor(d)){
                double j1=y+d;
                double j2=y-d;
                if(a[i][j1]==-1){
                    if(j1>0 and j1<=n){
                        q.push(P(i,j1));
                        a[i][j1]=a[x][y]+1;
                    }
                }
                if(a[i][j2]==-1){
                    if(j2>0 and j2<=n){
                        q.push(P(i,j2));
                        a[i][j2]=a[x][y]+1;
                    }
                }
            }
        }
      }
     
      rep1(i,1,n+1){
        rep1(j,1,n+1){
            cout<< a[i][j] << " ";
        }
        cout<<endl;
      }
    }


