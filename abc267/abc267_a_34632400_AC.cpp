/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34632400
 * Submitted at: 2022-09-05 07:29:35
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_a
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
      if(s[0]=='M') cout<<"5";
      else if(s[0]=='T'){
        if(s[1]=='u') cout<<"4";
        else cout<<"2";
      }else if(s[0]=='W') cout<<"3";
      else cout<<"1";
      
    }