/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/31763525
 * Submitted at: 2022-05-17 10:07:52
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a>=15&&b>=8) cout<<1<<endl;
    else if(a>=10&&a<15&&b<8&&b>=3) cout<<2<<endl;
    else if(a<10&&b<8&&b>=3)cout<<3<<endl;
    else cout<<4<<endl;
}