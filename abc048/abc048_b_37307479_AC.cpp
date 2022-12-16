/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc048/submissions/37307479
 * Submitted at: 2022-12-16 16:25:04
 * Problem URL: https://atcoder.jp/contests/abc048/tasks/abc048_b
 * Result: AC
 * Execution Time: 7 ms
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
using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    ll a,b,x;
    cin>>a>>b>>x;
    if(a==b){
        if(a%x==0) cout<< 1 << endl;
        else cout<< 0 << endl;
    }else if(a==0){
        cout<< b/x+1 << endl;
    }else cout<< b/x-(a-1)/x << endl;
  }
