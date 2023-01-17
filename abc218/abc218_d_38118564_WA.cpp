/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/38118564
 * Submitted at: 2023-01-17 10:52:21
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_d
 * Result: WA
 * Execution Time: 133 ms
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
    map<int,vector<int>> g;
    vector<int> a;
    rep(i,n){
        int x,y;
        cin>>x>>y;
        if(!g.count(x)) a.push_back(x);
        g[x].push_back(y);
    }
    sort(all(a));
    ll ans=0;
    rep(i,(int)a.size()){
        vector<int> b=g[a[i]];
        rep1(j,i+1,(int)a.size()){
            vector<int> c=g[a[j]];
            ll cnt=0;
            for(auto v:b){
                int t=*lower_bound(all(c),v);
                if(t==v) cnt++;
            }
            ans+=(cnt*(cnt-1))/2;
        }
    }
    cout<< ans << endl;
    }
