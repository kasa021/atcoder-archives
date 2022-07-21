/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tenka1-2013-quala/submissions/33392910
 * Submitted at: 2022-07-21 09:30:35
 * Problem URL: https://atcoder.jp/contests/tenka1-2013-quala/tasks/tenka1_2013_qualA_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n=42;
    while(n<130000000){
        n=n*2;
    }
    cout<<n<<endl;
    return 0;
}