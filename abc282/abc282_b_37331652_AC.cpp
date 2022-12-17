/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37331652
 * Submitted at: 2022-12-17 12:09:37
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_b
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
//typedef modint1000000007 mint;
int main(){
      int n,m,ans=0;
      cin>>n>>m;
      vector<string> s(n+1);
      rep(i,n) cin>>s[i];
      rep(i,n-1){
        rep1(j,i+1,n){
            string now="";
            rep(k,m){
                if(s[i][k]=='o' || s[j][k]=='o') now+='o';
                else now+='x';
            }bool f=true;
            rep(k,m){
                if(now[k]=='x') f=false;
            }
            if(f) ans++;
            //cout<< now << endl;
        }
      }
      cout<< ans << endl;
    }
