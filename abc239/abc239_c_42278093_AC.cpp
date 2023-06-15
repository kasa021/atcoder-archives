/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/42278093
 * Submitted at: 2023-06-15 12:57:10
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  // 距離が５になる点の組み合わせを全探索
  vector<pair<int, int>> v = {{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2}};
  for (int i = 0; i < 8;i++){
    for (int j = 0; j < 8;j++){
      int xx1 = x1 + v[i].first;
      int yy1 = y1 + v[i].second;
      int xx2 = x2 + v[j].first;
      int yy2 = y2 + v[j].second;
      // 距離が５になる点の組み合わせがあればYESを出力して終了
      if(xx1 == xx2 && yy1 == yy2){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}