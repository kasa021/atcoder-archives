/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30665565
 * Submitted at: 2022-04-02 13:25:27
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

    for(int i=k;i>0;i--){
         sort(a.begin(), a.end());
        // reverse(a.begin(), a.end());
        a[200008] = max(a[200008]-x,0); 
    }
    int ans=0;
    rep(i,200009) ans+=a[i];

    cout<<ans<<endl;
    return 0;

}