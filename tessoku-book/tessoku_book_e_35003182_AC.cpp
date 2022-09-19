/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35003182
 * Submitted at: 2022-09-19 18:19:27
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_e
 * Result: AC
 * Execution Time: 21 ms
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
      int n,k,ans=0;
      cin>>n>>k;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(k-i-j>=1&&k-i-j<=n){
                ans++;
                //cout<< i<<" "<<j<<" "<<k-i-j << endl;
            }
        }
      }
      cout<< ans << endl;
    }