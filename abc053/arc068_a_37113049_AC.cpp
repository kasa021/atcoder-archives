/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc053/submissions/37113049
 * Submitted at: 2022-12-09 12:03:54
 * Problem URL: https://atcoder.jp/contests/abc053/tasks/arc068_a
 * Result: AC
 * Execution Time: 5 ms
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
    ll x,cnt=0,a=5,b=6;
    cin>>x;
    cnt=(x/11)*2;
    x=x%11;
    if(7<=x) cnt+=2;
    else if(x!=0)cnt+=1;
    cout<< cnt << endl;
    }
