/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35032155
 * Submitted at: 2022-09-21 12:17:10
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_m
 * Result: AC
 * Execution Time: 40 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      int n,k;
      cin>>n>>k;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      int right = 0;
      ll ans=0;
      for (int left = 0; left < n; ++left) {
          while (right < n && a[right+1]-a[left]<=k) {
          /* 実際に right を 1 進める */
          // ex: sum += a[right];
          ++right;
      }
      if(right==n) right--;
      //cout<< left<<" "<<right << endl;
      ans+=right-left;
      if(right==left) ++right;
          /* break した状態で right は条件を満たす最大なので、何かする */
          // ex: res += (right - left);
      
          /* left をインクリメントする準備 */
          // ex: if (right == left) ++right;
          // ex: else sum -= a[left];
      }
      cout<<ans<<endl;
    }
