/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/30947125
 * Submitted at: 2022-04-13 11:01:06
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_b
 * Result: AC
 * Execution Time: 87 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin>>n;
    vector<int> count(n+1);
    for(int i=0;i<4*n-1;i++){
        int a;
        cin>>a;
        count[a] +=1;
    }
    for(int i=1;i<=n;i++){
        if(count[i] == 3)
        cout<<i<<endl;
    }
    return 0;
}