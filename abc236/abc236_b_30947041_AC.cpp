/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/30947041
 * Submitted at: 2022-04-13 10:54:58
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_b
 * Result: AC
 * Execution Time: 85 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,ans=0,wa=0;
    cin>>n;
    vector<int> v(4*n); //vector<int>で宣言するときはv[]ではなくv()で宣言
    for(int i=1;i<4*n;i++) {
        cin>>v[i];
        wa +=v[i];
    }
    ans = 2*n*(n+1);
    ans -=wa;

    cout<<ans<<endl;
    return 0;
}