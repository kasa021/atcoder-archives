/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/33219080
 * Submitted at: 2022-07-14 09:33:32
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018b_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using ll = long long ;

int main() {
    int n,h,w;
    cin>>n>>h>>w;
    int a[n],b[n];
    rep(i,n)cin>>a[i]>>b[i];
    int cnt=0;
    rep(i,n){
        if(a[i]>=h&&b[i]>=w) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
   