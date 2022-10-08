/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35478305
 * Submitted at: 2022-10-08 12:13:31
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_b
 * Result: AC
 * Execution Time: 8 ms
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
      vector<int> k(m);
      vector<vector<int>> x(m);
      vector<vector<bool>> cnt(109,vector<bool> (109,false));
      rep(i,101) cnt[i][i]=true;
      rep(i,m){
        cin>>k[i];
        rep(j,k[i]){
            int y;
            cin>>y;
            x[i].push_back(y);
        }
      }
      rep(i,m){
        for(auto j:x[i]){
            for(auto l:x[i]){
                cnt[j-1][l-1]=true;
                cnt[l-1][j-1]=true;
            }
        }
      }
      rep(i,n){
        rep(j,n){
            if(!cnt[i][j]) {
                cout<< "No" << endl;
                return 0;
            }
        }
      }
      cout<< "Yes" << endl;
      
    }