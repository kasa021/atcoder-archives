/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/31264249
 * Submitted at: 2022-04-25 10:00:59
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++)cin>>p[i];

    for(int i=k;i<=n;i++){
        sort(p,p+i);
        cout<<p[i-k]<<endl;
    }
    return 0;

}