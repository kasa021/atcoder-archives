/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35491562
 * Submitted at: 2022-10-08 12:45:07
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_d
 * Result: WA
 * Execution Time: 2205 ms
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
      vector<vector<int>> a(409,vector<int>(409,0));
      queue<P> q;
      q.push(P(1,1));
      int cnt=0;
      while(!q.empty()){
        int x,y;
        x=q.front().first;
        y=q.front().second;
        q.pop();
        rep1(i,1,n+1){
            rep1(j,1,n+1){
                if(a[i][j]!=0) continue;
                int c=(x-i)*(x-i)+(y-j)*(y-j);
                if(c==m){
                    q.push(P(i,j));
                    a[i][j]=a[x][y]+1;
                }
            }
        }
      }
      a[1][1]=0;
      rep1(i,1,n+1){
        rep1(j,1,n+1){
            cout<< a[i][j] << " ";
        }
        cout<<endl;
      }
    }