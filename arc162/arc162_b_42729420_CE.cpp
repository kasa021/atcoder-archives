/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc162/submissions/42729420
 * Submitted at: 2023-06-18 14:25:02
 * Problem URL: https://atcoder.jp/contests/arc162/tasks/arc162_b
 * Result: CE
 * Execution Time: None ms
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

vector<int> swapVec(int i,int j,vector<int>& a,int n){
  vector<int> res(n);
  rep(k,n){
    if (k < j) b[i] = a[i];
    else if(j<=k && k<=i+1){
      if(k==j) b[i] = a[i];
      else if(k==j+1) b[i] = a[i+1];
      else b[i] = a[i-2];
    }
    else b[i] = a[i];
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i], a[i]--;
  auto ans = invNum(a);
  if(ans.first % 2 == 1){
    cout << "No" << endl;
    return 0;
  }
  vector<P> ans;
  while (1) {
    rep(i,n){
      if(a[i] ! = i){
        if(i < n-1){
          ans.push_back({i,a[i]});
          a = swapVec(i,a[i],a,n);
        }else {
          ans.push_back({ n - 2, n - 4 });
          a = swapVec(n-2,n-4,a,n);
          ans.push_back({ i, a[i] });
          a = swapVec(i,a[i],a,n);
        }
        break;
      }
      if(i==n-1){
        cout << "Yes" << endl;
        rep(i,ans.size()){
          cout << ans[i].first+1 << " " << ans[i].second+1 << endl;
        }
        return 0;
      }
    }
  }
}