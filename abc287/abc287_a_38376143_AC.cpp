/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc287/submissions/38376143
 * Submitted at: 2023-01-28 12:01:42
 * Problem URL: https://atcoder.jp/contests/abc287/tasks/abc287_a
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
    int n,cnt=0;
    cin>>n;
    string s;
    rep(i,n){
        cin>>s;
        if(s=="For") cnt++;
    }
    if(cnt>n/2)cout<< "Yes" << endl;
    else cout<< "No" << endl;
    }
