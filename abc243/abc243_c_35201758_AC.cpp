/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/35201758
 * Submitted at: 2022-09-27 14:22:25
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_c
 * Result: AC
 * Execution Time: 191 ms
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
using T = tuple<int,int,char>;
using graph=vector<vector<int>>;

int main(){
      int n;
      cin>>n;
      vector<P> p(n);
      rep(i,n){
        int x,y;
        cin>>x>>y;
        p[i]=P(x,y);
      }
      string s;
      cin>>s;
      map<int,int> m;
      rep(i,n){
        if(s[i]=='R') continue;
        auto [x,y]=p[i];
        m[y]=max(m[y],x);
      }
      rep(i,n){
        if(s[i]=='L') continue;
        auto [x,y] = p[i];
        if(x<m[y]){
            cout<< "Yes" << endl;
            return 0;
        }
      }
      cout<< "No" << endl;
    }