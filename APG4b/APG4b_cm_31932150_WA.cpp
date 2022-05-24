/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31932150
 * Submitted at: 2022-05-24 09:26:10
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cm
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int a,b;
    cin>>a>>b;
    cout<<"A:";
    rep(i,a)cout<<']';
    cout<<" "<<endl;
    cout<<"B:";
    rep(i,b)cout<<']';

    return 0;
}