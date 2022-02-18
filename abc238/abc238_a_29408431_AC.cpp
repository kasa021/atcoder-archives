/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29408431
 * Submitted at: 2022-02-18 14:59:49
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n>=5||n==1){printf("Yes\n");}
    if(n<=4&&n!=1){printf("No\n");}

    return 0;
}
