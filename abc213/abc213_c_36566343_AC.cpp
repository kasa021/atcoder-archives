/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/36566343
 * Submitted at: 2022-11-18 04:48:07
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_c
 * Result: AC
 * Execution Time: 240 ms
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

void zaatu(vector<int> &s){
    vector<int> b=s;
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    
      rep(i,(int)s.size()){
      auto new_itr=lower_bound(b.begin(),b.end(),s[i]);
      s[i]=distance(b.begin(),new_itr)+1;
    } 
}

int main(){
      int h,w,n;
      cin>>h>>w>>n;
      vector<int> p(n),q(n);
      rep(i,n) cin>>p[i]>>q[i];

      zaatu(p);
      zaatu(q);
      rep(i,n){
        cout<< p[i]<<" "<<q[i] << endl;
      }
    }