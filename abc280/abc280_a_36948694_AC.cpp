/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36948694
 * Submitted at: 2022-12-03 12:01:32
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_a
 * Result: AC
 * Execution Time: 10 ms
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
    int h,w,ans=0;
    cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#') ans++;
        }
    }
    cout<< ans << endl;
    }
