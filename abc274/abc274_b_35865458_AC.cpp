/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35865458
 * Submitted at: 2022-10-22 12:04:42
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_b
 * Result: AC
 * Execution Time: 45 ms
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
      int h,w;
      cin>>h>>w;
      vector<vector<char>> m(h+9,vector<char>(w+9));
      rep(i,h){
        rep(j,w){
            cin>>m[i][j];
        }
      }
      rep(i,w){
        int ans=0;
        rep(j,h){
            if(m[j][i]=='#') ans++;
        }
        cout<< ans << endl;
      }
    }
