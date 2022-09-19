/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35003061
 * Submitted at: 2022-09-19 17:58:03
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cc
 * Result: AC
 * Execution Time: 6 ms
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
      string s;
      cin>>s;
      int ans=0,ni=1;
      for(int i=(int)s.size()-1;i>=0;i--){
        //cout<< "ni "<<ni << endl;
        if(s[i]=='1'){
            ans+=ni;
            //cout<< "ans "<<ans << endl;
        }
        ni*=2;
      }
      cout<< ans << endl;
    }