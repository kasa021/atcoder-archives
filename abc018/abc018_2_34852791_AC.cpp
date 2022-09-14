/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc018/submissions/34852791
 * Submitted at: 2022-09-14 09:34:04
 * Problem URL: https://atcoder.jp/contests/abc018/tasks/abc018_2
 * Result: AC
 * Execution Time: 7 ms
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
      int n;
      cin>>s>>n;
      rep(i,n){
        int l,r;
        cin>>l>>r;
        reverse(s.begin()+l-1,s.begin()+r);
        //cout<< s << endl;
      }
      cout<< s << endl;
    }