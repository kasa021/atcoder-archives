/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/36578023
 * Submitted at: 2022-11-18 15:49:27
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_c
 * Result: AC
 * Execution Time: 28 ms
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
      vector<vector<int>> c(4,vector<int>(4,0)),b(4,vector<int>(4,0));
      rep(i,3) rep(j,3) cin>>c[i][j];

      rep(i,101){
        rep(j,101){
            rep(k,101){
                rep(l,3){
                    rep(m,3){
                        int a;
                        if(l==0) a=i;
                        else if(l==1) a=j;
                        else a=k;
                        b[l][m]=c[l][m]-a;
                    }
                }
                if(b[0][0]==b[1][0] && b[1][0]==b[2][0] &&b[0][1]==b[1][1] && b[1][1]==b[2][1] && b[0][2]==b[1][2] && b[1][2]==b[2][2]){
                    cout<< "Yes" << endl;
                    return 0;
                }
            }
        }
      }
      cout<< "No" << endl;
    }