/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/41820122
 * Submitted at: 2023-05-28 19:20:21
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

int prime_factorize(int n){
    int res = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0) res++;
    }
    return res;
}

int main() {
    int n,ans=0;
    cin >> n;
    for(int i=1;i<=n;i+=2){
        if(prime_factorize(i)==8) ans++;
    }
    cout << ans << endl;
}