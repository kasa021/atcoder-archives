/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30652250
 * Submitted at: 2022-04-02 12:46:22
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_c
 * Result: WA
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    int n,k,x;
    vector<int> a(200009);

    cin>>n>>k>>x;
    rep(i,n) cin>>a[i];

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(k;k>=0;k--){
        a[0] = max(a[0]-x,0);
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());   
    }
    int ans=0;
    rep(i,n) ans+=a[i];

    cout<<ans<<endl;
    return 0;

}