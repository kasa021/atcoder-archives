/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/37396625
 * Submitted at: 2022-12-19 13:53:25
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_d
 * Result: WA
 * Execution Time: 244 ms
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
    ll t;
    cin>>t;
    rep(i,t){
        ll a,b,x;
        cin>>a>>b;
        x=b-2*a;
        //cout<< x << endl;
        if(x<0){
            cout<< "No" << endl;
        }else if(x==0){
            cout<< "Yes" << endl;
        }else {
            if(x%2){
                if((x & a) == 0) cout<< "Yes" << endl;
                else cout<< "No" << endl;
            }else {
                if((x & a) == 0 || (x/2 & a) == 0) cout<< "Yes" << endl;
                else cout<< "No" << endl;
                //cout<< (x & a) << endl;
            }
        }
    }
    }
