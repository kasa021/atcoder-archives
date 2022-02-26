/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29690392
 * Submitted at: 2022-02-26 12:48:00
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_e
 * Result: RE
 * Execution Time: 150 ms
 */

#include <bits/stdc++.h>
using namespace std;
long long n;
long long k;
long long a[200009];
long long b[200009];
long long x=0;

int main(){
    cin>>n>>k;
    for(long long i=0;i<n;i++) cin>>a[i];

    for(long long i=1;i<=k;i++){
        b[i] = a[i-1]%n;
        x+=a[b[i]];
    }

    cout<<x<<endl;
    return 0;
}