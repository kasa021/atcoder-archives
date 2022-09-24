/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/35090390
 * Submitted at: 2022-09-24 11:12:06
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_d
 * Result: WA
 * Execution Time: 11 ms
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

    
      int mx[6]={-1,-1,0,0,1,1};
      int my[6]={-1,0,-1,1,0,1};
       int black[2020][2020]={0};

int main(){
      //cout<<"a"<<endl;

      int n;
      cin>>n;
      dsu uf(1009);
      // int mx[6]={-1,-1,0,0,1,1};
      // int my[6]={-1,0,-1,1,0,1};
      //int black[2020][2020]={0};

      //vector<int>
      int x[n+1],y[n+1];
      rep1(i,1,n){
        cin>>x[i]>>y[i];
        x[i]+=1005;
        y[i]+=1005;
        black[x[i]][y[i]]=i;
      }
      //cout<<"a"<<endl;
      rep1(i,1,n){
        rep(j,6){
            int nx=x[i]+mx[j];
            int ny=y[i]+my[j];
            if(black[nx][ny]>0) uf.merge(i,black[nx][ny]);
        }
      }
      //cout<<"a"<<endl;

      int ans=0;
      rep1(i,1,n){
        if(uf.leader(i)==i){
            ans++;
        }
      }
      cout<< ans << endl;

    }