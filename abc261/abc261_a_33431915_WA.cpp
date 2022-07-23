/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33431915
 * Submitted at: 2022-07-23 12:03:42
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
     int l1,r1,l2,r2;
     cin>>l1>>r1>>l2>>r2;
     if(r1>l2){
        cout<<r1-l2<<endl;
     }else cout<<'0'<<endl;
     
    }