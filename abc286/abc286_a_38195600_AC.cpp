/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc286/submissions/38195600
 * Submitted at: 2023-01-21 12:07:40
 * Problem URL: https://atcoder.jp/contests/abc286/tasks/abc286_a
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
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    p--,q--,r--,s--;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int j=r,k=p;
    rep(i,n){
        if(i<p){
            cout<< a[i] <<" ";
        }else if(i>=p && i<=q){
            cout<<a[j]<<" ";
            j++;
        }else if(i>=r && i<=s){
            cout<< a[k] << " ";
            k++;
        }else cout<< a[i] << " ";
    }
    cout<<endl;
    }
