/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/31932303
 * Submitted at: 2022-05-24 09:38:02
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int n,k;
    cin>>n>>k;
    int ans=0;
    ans=n*(n+1)*100*k/2+k*n*(k+1)/2;
    cout<<ans<<endl;
    return 0;
}