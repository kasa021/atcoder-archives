/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc287/submissions/38382300
 * Submitted at: 2023-01-28 12:05:31
 * Problem URL: https://atcoder.jp/contests/abc287/tasks/abc287_b
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
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n),t(m);
    rep(i,n) cin>>s[i];
    rep(i,m) cin>>t[i];
    int cnt=0;
    rep(i,n){
        rep(j,m){
                if(s[i][3]==t[j][0] && s[i][4]==t[j][1] && s[i][5]==t[j][2]){
                    cnt++;
                    break;
                }
        }
    }
    cout<< cnt << endl;
    }
