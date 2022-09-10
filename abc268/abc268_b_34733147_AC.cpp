/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34733147
 * Submitted at: 2022-09-10 12:06:36
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_b
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
      string s,t;
      cin>>s>>t;
      int size=s.size();
      bool f=true;
      rep(i,size){
        if(s[i]!=t[i]) f=false;
      }
      if(!f) cout<< "No" << endl;
      else cout<< "Yes" << endl;
    }