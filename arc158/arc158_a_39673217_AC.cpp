/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc158/submissions/39673217
 * Submitted at: 2023-03-12 12:23:57
 * Problem URL: https://atcoder.jp/contests/arc158/tasks/arc158_a
 * Result: AC
 * Execution Time: 466 ms
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
    int t;
    cin>>t;
    rep(i,t){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a%2==b%2 && a%2==c%2 && (a+b+c)%3==0){
            ll d=(a+b+c)/(ll)3;
            //cout<< d << endl;
            ll ans=max(abs(d-a),abs(d-b));
            ans=max(abs(d-c),ans);
            cout<< ans/(ll)2 << endl;
        }else cout<< -1 << endl;
    }
    }
