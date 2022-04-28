/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/31316944
 * Submitted at: 2022-04-28 05:00:17
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_c
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
using namespace std;


void S(int n){
    if(n == 1) {
        cout<<1<<" ";
        return ;
    }

    else{
        S(n-1);
        cout<<n<<" ";
        S(n-1);
    }
}
int main() {
    int n;
    cin>>n;
    S(n);
    return 0;
}