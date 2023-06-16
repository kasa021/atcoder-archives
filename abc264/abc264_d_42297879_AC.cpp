/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/42297879
 * Submitted at: 2023-06-16 13:51:44
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_d
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
#include <cmath>



using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

map<char,int> atcoder = {
  {'a', 0},
  {'t', 1},
  {'c', 2},
  {'o', 3},
  {'d', 4},
  {'e', 5},
  {'r', 6},
};

pair<int, string> invNum(string& a) {
  int n = a.size();
  if (n == 1) return { 0, a };                                              //  1要素なら転倒数は0
  int mid = n / 2;
  string leftVec(a.begin(), a.begin() + mid);                          //  範囲は[0,mid)
  string rightVec(a.begin() + mid, a.end());                           // 範囲は[mid,end)
  auto left = invNum(leftVec);                                              // 左半分の転倒数
  auto right = invNum(rightVec);                                            // 右半分の転倒数
  string res;                                                          // ソート済配列
  int inv = 0;
  inv += left.first + right.first;                                          // 左右の転倒数を足す
  int i = 0, j = 0;
  while (i < left.second.size() && j < right.second.size()) {               // どちらかがsizeに達するまで続ける
    if (atcoder[left.second[i]] < atcoder[right.second[j]]) res+=left.second[i++];  // 小さい方を挿入する
    else {
      res += right.second[j++];                                             // 小さい方を挿入する
      inv += left.second.size() - i;                                        // left[i]>right[j]なら、left[i]以降の要素はすべてright[j]より大きいので、転倒数を足す
    }
  }
  // 上のループを抜けたときiまたはjのどちらか一方がsizeに達していないので、sizeに達するまで挿入する
  while (i < left.second.size()) res+=left.second[i++];
  while (j < right.second.size()) res+=right.second[j++];
  return { inv, res };
}

int main() {
  string s;
  cin >> s;
  auto ans = invNum(s);
  cout << ans.first << endl;
  return 0;
}