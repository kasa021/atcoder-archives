/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/36566041
 * Submitted at: 2022-11-18 04:26:14
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_c
 * Result: AC
 * Execution Time: 349 ms
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
      int h,w,n;
      cin>>h>>w>>n;
      vector<int> a(n),b(n);
      rep(i,n) cin>>a[i]>>b[i];
      map<int,vector<int>> mph,mpv;
      rep(i,n){
        mpv[a[i]].push_back(i);
        mph[b[i]].push_back(i);
      }
      int p=1;
      for(auto [i,vec]:mph){
        for(auto v:vec){
            //cout<< i<<" "<<v << endl;
            b[v]=p;
        }
        p++;
      }
      p=1;
      for(auto [i,vec]:mpv){
        for(auto v:vec){
            //cout<< i<<" "<<v << endl;
            a[v]=p;
        }
        p++;
      }
      rep(i,n){
        cout<< a[i]<<" "<<b[i] << endl;
      }
    }