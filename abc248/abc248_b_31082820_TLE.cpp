/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31082820
 * Submitted at: 2022-04-18 10:16:29
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_b
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)


int main(){
    long long a,b,k;
    cin>>a>>b>>k;
    int ans;
    while(a,b){
        a*=k;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}