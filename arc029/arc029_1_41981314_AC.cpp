/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc029/submissions/41981314
 * Submitted at: 2023-06-03 15:35:31
 * Problem URL: https://atcoder.jp/contests/arc029/tasks/arc029_1
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];  // 入力を受け取ります

    // time1: 一つ目の肉焼き器の時間, time2: 二つ目の肉焼き器の時間、ans: 答え
    int time1 = 0, time2 = 0,ans=1000000000;  // ansは十分大きい値で初期化しておきます
    // 肉がn個あるので、全ての肉について、どちらの肉焼き器で焼くかを決めます
    for (int i = 0; i < (1 << n);i++){  // 2^n通りの全てのパターンを試します
        time1 = 0, time2 = 0;           // time1とtime2を初期化します
        for (int j = 0; j < n;j++){     // n個の肉について、どちらの肉焼き器で焼くかを決めます
            if(i & (1<<j))              // iのjビット目が1ならば、一つ目の肉焼き器で焼きます
                time1 += t[j];
            else
                time2 += t[j];
        }
        ans = min(ans, max(time1, time2));  // ansを更新します
    }
    cout << ans << endl;  // ansを出力します
}