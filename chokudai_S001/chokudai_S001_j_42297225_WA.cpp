/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/42297225
 * Submitted at: 2023-06-16 13:18:22
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: WA
 * Execution Time: 57 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

// 転倒数、ソート済配列
pair<int, vector<int>> invNum(vector<int>& a) {
  int n = a.size();
  if (n == 1) return { 0, a };                                              //  1要素なら転倒数は0
  int mid = n / 2;
  vector<int> leftVec(a.begin(), a.begin() + mid);                          //  範囲は[0,mid)
  vector<int> rightVec(a.begin() + mid, a.end());                           // 範囲は[mid,end)
  auto left = invNum(leftVec);                                              // 左半分の転倒数
  auto right = invNum(rightVec);                                            // 右半分の転倒数
  vector<int> res;                                                          // ソート済配列
  int inv = 0;
  inv += left.first + right.first;                                          // 左右の転倒数を足す
  int i = 0, j = 0;
  while (i < left.second.size() && j < right.second.size()) {               // どちらかがsizeに達するまで続ける
    if (left.second[i] < right.second[j]) res.push_back(left.second[i++]);  // 小さい方を挿入する
    else {
      res.push_back(right.second[j++]);                                     // 小さい方を挿入する
      inv += left.second.size() - i;                                        // left[i]>right[j]なら、left[i]以降の要素はすべてright[j]より大きいので、転倒数を足す
    }
  }
  // 上のループを抜けたときiまたはjのどちらか一方がsizeに達していないので、sizeに達するまで挿入する
  while (i < left.second.size()) res.push_back(left.second[i++]);
  while (j < right.second.size()) res.push_back(right.second[j++]);
  return { inv, res };
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  auto res = invNum(a);
  cout << res.first << endl;
  return 0;
}