/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36476727
 * Submitted at: 2022-11-13 12:27:32
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_b
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
      int n;
      bool f=true;
      cin>>n;
      vector<string> s(n);
      rep(i,n) cin>>s[i];
      rep(i,n-1)rep1(j,i+1,n) if(s[i]==s[j]) f=false;
      
      string s1="HDCS",s2="A23456789TJQK";
      rep(i,n){
        if(!count(all(s1),s[i][0])||!count(all(s2),s[i][1])) f=false;
      }
      cout << (f ? "Yes" : "No") << endl;
    }