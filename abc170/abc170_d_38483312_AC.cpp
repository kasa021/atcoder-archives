/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc170/submissions/38483312
 * Submitted at: 2023-01-30 10:31:54
 * Problem URL: https://atcoder.jp/contests/abc170/tasks/abc170_d
 * Result: AC
 * Execution Time: 131 ms
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

    map<int,int> cnt;
    rep(i,n) cnt[a[i]]++;

    int ans=0;
    const int INF = *max_element(all(a));
    vector<bool> dp(INF+1,true);
    rep(i,n){
        if(dp[a[i]]){
            if(cnt[a[i]]==1) ans++;
            for(int j=a[i]*2;j<=INF;j+=a[i]){
                dp[j]=false;
            }
        }
    }
    cout<< ans << endl;
    }
