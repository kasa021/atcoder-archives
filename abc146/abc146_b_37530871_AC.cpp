/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/37530871
 * Submitted at: 2022-12-25 01:09:01
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_b
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
    int n;
    string s;
    cin>>n>>s;
    rep(i,s.size()){
        if(s[i]+n>'Z') s[i]=s[i]+n-26;
        else s[i]=s[i]+n;
    }
    cout<< s
     << endl;
    }
