/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/31333395
 * Submitted at: 2022-04-29 02:01:22
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_b
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    int ans = 0,ansa=0;
    cin>>n;
    int a[n],b[n];
    
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i] == b[i]) ans++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && i!=j) ansa++;
        }
    }

    cout<<ans<<ansa<<endl;
    return 0;

}