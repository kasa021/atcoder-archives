/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/36336989
 * Submitted at: 2022-11-09 04:17:16
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_a
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
      string ans;
      rep(i,4-(int)s.size()){
        ans+='0';
      }
      cout<< ans+s << endl;
    }