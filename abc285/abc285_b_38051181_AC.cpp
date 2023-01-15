/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38051181
 * Submitted at: 2023-01-15 12:14:19
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_b
 * Result: AC
 * Execution Time: 40 ms
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
//typedef modint1000000007 mint;
int main(){
    int n;
    string s;
    cin>>n>>s;
    rep1(i,1,n){
        int ans=0;
        rep(j,n){
            if(i+j>=n) continue;
            if(s[j]==s[i+j]) break;
            if(s[j]!=s[j+i]) ans++;
        }
        cout<< ans << endl;
    }
    }
