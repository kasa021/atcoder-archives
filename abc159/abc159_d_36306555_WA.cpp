/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc159/submissions/36306555
 * Submitted at: 2022-11-07 12:10:55
 * Problem URL: https://atcoder.jp/contests/abc159/tasks/abc159_d
 * Result: WA
 * Execution Time: 520 ms
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

        ll ans=0;
        for(auto [p,q]:num){
            ans+=(q*(q-1))/2;
        }
        rep(i,n){
            ll now1,now2;
            now1=((num[a[i]]-1)*(num[a[i]]-2))/2;
            now2=((num[a[i]])*(num[a[i]]-1))/2;
            cout<< ans-now2+now1 << endl;
        }
      
   }