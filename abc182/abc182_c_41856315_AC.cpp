/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/41856315
 * Submitted at: 2023-05-30 13:18:33
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_c
 * Result: AC
 * Execution Time: 20 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;   // 各桁の数字にアクセスしやすいのでstring型で受け取る
    cin >> s;
    int size = s.size(), ans = 20;  // ansは最大18桁の数字なので、18より大きい値で初期化しておく
    for (int i = 0; i < (1 << size); i++) {  // 2^size通りのbit全探索 (sizeは最大18なので、2^18 = 262144通り)
        int sum = 0;
        for (int j = 0; j < size; j++) {
            if (i & (1 << j)) {           // iのjビット目が立っているかどうか
                sum += s[j] - '0';        // jビット目が立っているならば、j桁目の数字を足す s[j]はchar型なので、'0'を引くことでint型に変換している
            }
        }
        // 3の倍数判定は、各桁の数字の和が3の倍数であること問題の条件で全部削除しちゃいけないので
        // sum!= 0も条件に入れる
        if (sum % 3 == 0  && sum != 0) {
            // __builtin_popcount(i)はiのbit表現における1の個数を返す関数
            // size - __builtin_popcount(i)はiのbit表現における0の個数を返す
            ans = min(ans, size - __builtin_popcount(i));
        }
    }
    cout << (ans == 20 ? -1 : ans) << endl;
}