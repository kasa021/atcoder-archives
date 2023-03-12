/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc158/submissions/39673068
 * Submitted at: 2023-03-12 12:22:37
 * Problem URL: https://atcoder.jp/contests/arc158/tasks/arc158_a
 * Result: WA
 * Execution Time: 463 ms
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
        int a,b,c;
        cin>>a>>b>>c;
        if(a%2==b%2 && a%2==c%2 && (a+b+c)%3==0){
            int d=(a+b+c)/3;
            //cout<< d << endl;
            int ans=max(abs(d-a),abs(d-b));
            ans=max(abs(d-c),ans);
            cout<< ans/2 << endl;
        }else cout<< -1 << endl;
    }
    }
