/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/30957754
 * Submitted at: 2022-04-14 05:31:14
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_b
 * Result: AC
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> h(n),ans(n);

    for(int i=0;i<n;i++) cin>>h[i];
     ans[0] = h[0];
     int i;
    for( i=0;i<n-1;++i){
        ans[i+1]=max(h[i],h[i+1]);

        if(ans[i]>=ans[i+1]) break;

    }

    cout<<ans[i]<<endl;

    return 0;

}