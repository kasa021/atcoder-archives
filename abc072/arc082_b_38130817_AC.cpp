/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/38130817
 * Submitted at: 2023-01-18 05:40:14
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/arc082_b
 * Result: AC
 * Execution Time: 31 ms
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
    int n,cnt=0,pre=0;
    cin>>n;
    vector<int> p(n);
    rep(i,n){
        cin>>p[i];
        p[i]--;
        if(p[i]==i){
            if(pre==0) cnt++,pre=1;
            else pre=0;
        }else pre=0;
    }
    cout<< cnt << endl;
    }
