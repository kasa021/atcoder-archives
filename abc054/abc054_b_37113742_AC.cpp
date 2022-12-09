/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc054/submissions/37113742
 * Submitted at: 2022-12-09 12:35:31
 * Problem URL: https://atcoder.jp/contests/abc054/tasks/abc054_b
 * Result: AC
 * Execution Time: 7 ms
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
      vector<string> a(n+9),b(m+9);
      rep(i,n) cin>>a[i];
      rep(i,m) cin>>b[i];
      bool f=true;
      //cout<< "ans" << endl;
      for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            f=true;
            if(x+m-1>=n || y+m-1>=n){
                //cout<< x<<" "<<y << endl;
                f=false;
            }else {
                rep(i,m){
                    rep(j,m){
                        if(b[i][j]!=a[i+x][j+y]) f=false;
                    }
                }
            }
            if(f){
                cout<< "Yes" << endl;
                return 0;
            }
        }
      }
      cout<< "No" << endl;
    }