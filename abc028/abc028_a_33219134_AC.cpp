/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/33219134
 * Submitted at: 2022-07-14 09:37:13
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using ll = long long ;

int main() {
    int n;
    cin>>n;
    if(n<60)cout<<"Bad"<<endl;
    else if(n<90) cout<<"Good"<<endl;
    else if(n<100)cout<<"Great"<<endl;
    else if(n==100) cout<<"Perfect"<<endl;
    return 0;

}