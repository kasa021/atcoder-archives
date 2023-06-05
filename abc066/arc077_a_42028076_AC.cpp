/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/42028076
 * Submitted at: 2023-06-05 22:13:22
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/arc077_a
 * Result: AC
 * Execution Time: 84 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);  // n個のint型の配列
    for (int i = 0; i < n; i++) cin >> a[i];  // n個のint型の配列に値を入力する
    deque<int> dq;  // dequeの宣言
    for (int i = 0; i < n;i++){
        if(i%2==0){   // 偶数番目の場合, dqの後ろに追加
            dq.push_back(a[i]);
        }else{        // 奇数番目の場合, 逆順にdqの前に追加
            dq.push_front(a[i]);
        }
    }
    if(n%2==0){   // 偶数番目の場合, dqの後ろから出力
        for (int i = 0; i < n;i++){
            cout << dq[i] << " ";
        }
    }else{       // 奇数番目の場合, dqの前から出力
        for (int i = n-1; i >= 0;i--){
            cout << dq[i] << " ";
        }
    }
    cout << endl;
}