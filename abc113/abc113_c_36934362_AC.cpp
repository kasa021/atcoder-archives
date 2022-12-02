/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/36934362
 * Submitted at: 2022-12-02 18:42:18
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_c
 * Result: AC
 * Execution Time: 235 ms
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
      vector<P> e[101010];
      string ans[101010];
      rep(i,m) {
        int p,y;
        cin>>p>>y;
        e[p].push_back({y,i});
      }
      rep1(i,1,n+1){
        sort(all(e[i]));
        int r=e[i].size();
        rep(j,r){
            char buf[13];
            sprintf(buf, "%06d%06d", i, j + 1);
            ans[e[i][j].second] = string(buf);
        }
      }
      rep(i,m) cout<< ans[i] << endl;
    }
