/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc147/submissions/37470881
 * Submitted at: 2022-12-24 05:14:48
 * Problem URL: https://atcoder.jp/contests/abc147/tasks/abc147_c
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
//typedef modint1000000007 mint;
int main(){
    int n,ans=0,cnt=0;
    bool f=true;
    cin>>n;
    vector<vector<int>> x(n+9,vector<int>(n+9,0)),y(n+9,vector<int>(n+9,0));
    vector<int> a(n);
    rep(i,n){
        cnt++;
        cin>>a[i];
        //cout<< a[i] << endl;
        rep(j,a[i]){
            int b,c;
            cin>>b>>c;
            x[i][j]=b-1;
            y[i][j]=c;
        }
    } 
    rep(i,(1<<n)){
        //cout<< i << endl;
        f=true;
        rep(j,n){
            if(i & (1<<j)){
                rep(k,a[j]){
                    if(y[j][k]==1){
                        if(!(i & (1<<x[j][k]))) f=false;
                    }else {
                        if(i & (1<<x[j][k])) f=false;
                    }
                }
            }
        }
        if(f){
            ans=max(ans,__builtin_popcount(i));
            //cout<< i << endl;
        }
    }
    cout<< ans << endl;
    }
