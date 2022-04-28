/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/31316921
 * Submitted at: 2022-04-28 04:58:46
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_c
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;


void S(int n){
    if(n = 1) {
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