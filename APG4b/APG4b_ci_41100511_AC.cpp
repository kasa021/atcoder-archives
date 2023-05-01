/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/41100511
 * Submitted at: 2023-05-01 13:14:54
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ci
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;



int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = max(a,max(b,c))-min(a,min(b,c));
    cout<<ans<<endl;
}