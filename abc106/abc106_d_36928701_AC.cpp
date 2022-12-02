/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/36928701
 * Submitted at: 2022-12-02 11:18:13
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_d
 * Result: AC
 * Execution Time: 239 ms
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
//using mint = modint1000000007;
int main(){
      int n,m,q,l,r;
      cin>>n>>m>>q;
      vector<vector<int>> f(n+9,vector<int> (n+9,0));
      rep(i,m){
        cin>>l>>r;
        f[l][r]++;
      }
      rep(i,n+1){
        rep(j,n+1){
            f[i][j+1]+=f[i][j];
        }
      }
      rep(i,n+1){
        rep(j,n+1){
            f[i+1][j]+=f[i][j];
        }
      }
      rep(i,q){
        cin>>l>>r;
        cout<< f[r][r]+f[l-1][l-1]-f[l-1][r]-f[r][l-1] << endl;
      }
    }