/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc159/submissions/41282018
 * Submitted at: 2023-05-10 05:21:07
 * Problem URL: https://atcoder.jp/contests/arc159/tasks/arc159_a
 * Result: AC
 * Execution Time: 14 ms
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

const ll inf=1e18;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> edge(109,vector<ll>(109));
    rep(i,n) rep(j,n) cin>>edge[i][j];

    vector<vector<ll>> d(109,vector<ll> (109,inf));
    rep(i,n)rep(j,n){
        if(edge[i][j]) d[i][j]=1;
    }
    rep(k,n){
       rep(i,n){
           rep(j,n){
               d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    ll q;
    cin>>q;
    rep(i,q){
        ll s,t;
        cin>>s>>t;
        s=(s-1)%n,t=(t-1)%n;
        if(d[s][t]!=inf)cout<<d[s][t]<<endl;
        else cout<<-1<<endl;
    }
    }
    