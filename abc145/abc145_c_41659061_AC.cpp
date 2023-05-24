/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/41659061
 * Submitted at: 2023-05-24 00:53:02
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

double dis(int x1, int y1, int x2, int y2)  // 2点間の距離を求める関数
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int factorize(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

int main()
{
    cout << fixed << setprecision(15); // 小数点以下15桁表示
    int n;
    cin >> n;
    vector<int> x(n), y(n);  // x座標, y座標
    double ans = 0;  // ans: 答え
    vector<int> a(n);  // a: 順列
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i]; // 座標を入力
        a[i] = i;  // 順列を初期化
    }
    do
    {
        for(int i = 0; i < n - 1; i++)
        {
            ans += dis(x[a[i]], y[a[i]], x[a[i + 1]], y[a[i + 1]]);
        }
    } while (next_permutation(a.begin(), a.end()));

    cout<< ans/factorize(n) << endl;
}