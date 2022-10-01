/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35279507
 * Submitted at: 2022-10-01 12:10:13
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_b
 * Result: AC
 * Execution Time: 450 ms
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
      int n,q;
      cin>>n>>q;
      vector<vector<int>> a(n);
      rep(i,n){
        int l;
        cin>>l;
        rep(j,l){
            int b;
            cin>>b;
            a[i].push_back(b);
        }
      }
      rep(i,q){
        int s,t;
        cin>>s>>t;
        cout<< a[s-1][t-1] << endl;
      }
    }
