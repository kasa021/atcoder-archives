/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/37119537
 * Submitted at: 2022-12-09 19:36:43
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_d
 * Result: AC
 * Execution Time: 97 ms
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
typedef modint1000000007 mint;
int main(){
    int s;
    cin>>s;
    mint ans=0,now=1;
    rep1(k,1,s/3+1){
        now=1;
    rep1(i,1,s-2*k) now*=i;
    rep1(i,1,k) now/=i;
    rep1(i,1,s-3*k+1) now/=i;
    ans+=now;
    }
    cout<< ans.val() << endl;      
    }
