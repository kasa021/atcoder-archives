/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31916433
 * Submitted at: 2022-05-23 10:50:23
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_c
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(){
    int n;
    string s[100];
    int cnt[10][10];
    int ans, mx;
    rep(i,10){
        rep(j,10) cnt[i][j]=0;
    }

    cin>>n;
    rep(i,n) cin>>s[i];

    rep(i,n){
        rep(j,10){
            cnt[(s[i][j]-'0')][j]++;
        }
    }

    ans=1000;
    rep(i,10){
        mx=0;
        rep(j,10){
            mx=max(mx,10*(cnt[i][j]-1)+j);
        }
        ans=min(ans,mx);
    }

    cout<<ans<<endl;
    return 0;

}