/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc056/submissions/37270782
 * Submitted at: 2022-12-14 12:56:16
 * Problem URL: https://atcoder.jp/contests/abc056/tasks/arc070_a
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    ll x,sum=0,time=1;
    cin>>x;
    while(sum<x){
        sum+=time;
        time++;
        //cout<< sum<<" "<<time << endl;
    }
    cout<< time-1 << endl;
    }
