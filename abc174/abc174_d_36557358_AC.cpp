/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc174/submissions/36557358
 * Submitted at: 2022-11-17 13:13:55
 * Problem URL: https://atcoder.jp/contests/abc174/tasks/abc174_d
 * Result: AC
 * Execution Time: 13 ms
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
      int n,cr=0,cw=0,ans=0;
      string s;
      cin>>n>>s;
      rep(i,n){
        if(s[i]=='R') cr++;
        else cw++;
      }
      if(cr==0||cw==0){
        cout<< "0" << endl;
        return 0;
      }else{
        rep(i,cr){
            if(s[i]=='W') ans++;
        }
      }
      cout<< ans << endl;
    }
