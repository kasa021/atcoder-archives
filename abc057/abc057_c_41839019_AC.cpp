/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/41839019
 * Submitted at: 2023-05-29 15:24:45
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;


long long digit(long long a, long long b) {
    long long digit_a = 0, digit_b = 0;
    while (a > 0) {  // aの桁数を求める
        a /= 10;
        digit_a++;
    }
    while (b > 0) {  // bの桁数を求める
        b /= 10;
        digit_b++;
    }

    return max(digit_a, digit_b);
}

int main() {  // 入力されるnが10^10なのでintではオーバーフローする
    long long n,ans=100;
    cin >> n;
    for (long long i = 1; i * i <= n; i++) {  // 素数判定と同じくiは√nまでで良い
        if (n % i == 0) {  // iがnの約数ならば,n/iも約数
            long long a = i;      
            long long b = n / i;  
            ans = min(ans, digit(a, b));  // 桁数の最小値を更新
        }
    }
    cout << ans << endl;
}
