/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc117/submissions/37111877
 * Submitted at: 2022-12-09 10:48:08
 * Problem URL: https://atcoder.jp/contests/abc117/tasks/abc117_c
 * Result: AC
 * Execution Time: 37 ms
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
    vector<int> a(m);
    rep(i,m) cin>>a[i];
    sort(all(a));
    vector<int> b(m-1);
    rep(i,m-1) b[i]=a[i+1]-a[i];
    sort(all(b));
    reverse(all(b));
    rep(i,m-1){
        if(i<n-1) continue;
        ans+=b[i];
    }
    cout<< ans << endl;
    }
