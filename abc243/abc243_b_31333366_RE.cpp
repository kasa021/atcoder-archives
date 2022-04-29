/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/31333366
 * Submitted at: 2022-04-29 01:58:37
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_b
 * Result: RE
 * Execution Time: 111 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); ++i)
using ll = long long;

int main(){
    int n;
    int ans = 0,ans2=0;
    int a[1000000009],b[1000000009];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i] == b[i]) ans++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && i!=j) ans2++;
        }
    }

    cout<<ans<<ans2<<endl;
    return 0;

}