/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc170/submissions/38482768
 * Submitted at: 2023-01-30 10:02:23
 * Problem URL: https://atcoder.jp/contests/abc170/tasks/abc170_d
 * Result: TLE
 * Execution Time: 2205 ms
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
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    sort(all(a));
    vector<bool> b(a.size(),true);
    rep(i,a.size()){
        if(!b[i]) continue;
        rep1(j,i+1,n){
            if(a[j] % a[i] ==0) b[j]=false;
            if(a[i] == a[j]) b[i]=false;
        }
    }
    int ans=0;
    rep(i,n) if(b[i]) ans++;
    cout<<ans<<endl;

    }
