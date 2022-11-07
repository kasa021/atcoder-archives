/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc159/submissions/36306329
 * Submitted at: 2022-11-07 12:00:53
 * Problem URL: https://atcoder.jp/contests/abc159/tasks/abc159_d
 * Result: WA
 * Execution Time: 2206 ms
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
      int n;
      cin>>n;
      vector<int> a(n);
      map<int,int> num;
      rep(i,n) {
        cin>>a[i];
        num[a[i]]++;
      }

      rep(i,n){
        ll ans=0;
        for(auto [p,q]:num){
            if(p==a[i]){
                ans+=((q-1)*(q-2))/2;
            }else {
                ans+=(q*(q-1))/2;
            }
        }
        cout<< ans << endl;
      }
   }