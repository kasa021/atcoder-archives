/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc137/submissions/36577628
 * Submitted at: 2022-11-18 15:21:15
 * Problem URL: https://atcoder.jp/contests/arc137/tasks/arc137_a
 * Result: AC
 * Execution Time: 1961 ms
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

int main(){
    ll l,r,ans=0;
    cin>>l>>r;
    rep(i,2000){
       rep(j,2000){
        if(l+i<r-j && r-j>0 ){
            if(__gcd(l+i,r-j)==1) ans=max(ans,r-j-(l+i));
        }
       }
    }
    cout<< ans << endl;
    }

