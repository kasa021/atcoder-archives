/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32666482
 * Submitted at: 2022-06-23 01:53:34
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int n,ans=1;
    cin>>n;
    for(int i=0;i<n;i++){
        ans*=2;
    }
    cout<<ans<<endl;

    
}