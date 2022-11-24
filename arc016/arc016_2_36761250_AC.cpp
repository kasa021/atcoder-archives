/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc016/submissions/36761250
 * Submitted at: 2022-11-24 15:56:14
 * Problem URL: https://atcoder.jp/contests/arc016/tasks/arc016_2
 * Result: AC
 * Execution Time: 5 ms
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
      int n,ans=0;
      cin>>n;
      vector<string> x(n);
      rep(i,n) cin>>x[i];
      rep(i,n){
        rep(j,9) if(x[i][j]=='x') ans++;
      }
      //cout<< ans << endl;
      rep(i,9){
        rep(j,n){
            if(j==n-1 && x[j][i]=='o') ans++;
            else if(x[j][i]=='o' && (x[j+1][i]=='x' || x[j+1][i]=='.')) ans++;
        }
      }
      cout<< ans << endl;
    }
