/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37498216
 * Submitted at: 2022-12-24 12:16:36
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_c
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
//typedef modint1000000007 mint;
int main(){
      string s;
      int cnt=0,ans=0;
      cin>>s;
      rep(i,(int)s.size()){
        if(s[i]!='0'){
          ans++;
        }else {
          if(i!=(int)s.size()-1  && s[i+1]=='0'){
            ans++;
            i++;
          }else ans++;
        }
      }
      cout<< ans << endl;
    }
