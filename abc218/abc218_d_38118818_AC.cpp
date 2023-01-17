/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/38118818
 * Submitted at: 2023-01-17 11:09:07
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_d
 * Result: AC
 * Execution Time: 123 ms
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
    cin>>n;
    vector<P> v(n);
    rep(i,n) cin>>v[i].first>>v[i].second;
    sort(all(v));
    int ans=0;
    rep(i,n){
        rep(j,n){
            if(v[i].first<v[j].first && v[i].second< v[j].second){
                P a=*lower_bound(all(v),P(v[i].first,v[j].second));
                P b=*lower_bound(all(v),P(v[j].first,v[i].second));
                if(a==P(v[i].first,v[j].second) && b==P(v[j].first,v[i].second)) ans++;
            }
        }
    }
    cout<< ans << endl;
    }
