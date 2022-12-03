/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36959797
 * Submitted at: 2022-12-03 12:08:32
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_c
 * Result: WA
 * Execution Time: 28 ms
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
     cin>>s>>t;
     int sizes=(int)s.size(),sizet=(int)t.size();
     rep(i,sizes){
        if(s[i]==t[i]) ans++;
        else {
            ans++;
            break;
        }
     }
     cout<< ans << endl;
    }
