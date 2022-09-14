/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc002/submissions/34852707
 * Submitted at: 2022-09-14 09:27:37
 * Problem URL: https://atcoder.jp/contests/abc002/tasks/abc002_2
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
      string s;
      cin>>s;
      string t;
      int size=s.size();
      rep(i,size){
        if(s[i]!='a'&&s[i]!='i'&&s[i]!='u'&&s[i]!='e'&&s[i]!='o') t+=s[i];
      }
      cout<< t << endl;
    }