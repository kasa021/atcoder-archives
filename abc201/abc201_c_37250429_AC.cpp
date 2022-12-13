/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/37250429
 * Submitted at: 2022-12-13 10:27:17
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_c
 * Result: AC
 * Execution Time: 9 ms
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
      string s,t;
      int ans=0;
      cin>>s;
      vector<int> cnt(10,0);
      rep(i,10000){
        bool f=true;
        t="";
        t=to_string(i);
      while((int)t.size()<4){
        t='0'+t;
      }
      rep(j,4){
        cnt[t[j]-'0']++;
      }
      rep(j,10){
        if(s[j]=='o' && cnt[j]<=0){
            f=false;
      }else if(s[j]=='x' && cnt[j]>0){
        f=false;
      }
      }

      if(f){
        //cout<< t << endl;
        ans++;
      }
      rep(j,4){
        cnt[t[j]-'0']--;
      }
    }

      cout<< ans << endl;
    }
