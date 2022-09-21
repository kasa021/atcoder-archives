/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35032519
 * Submitted at: 2022-09-21 12:34:03
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cl
 * Result: AC
 * Execution Time: 37 ms
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
      int n;
      ll k,ans=0;
      cin>>n>>k;
      vector<int> a(n+10);
      rep(i,n) cin>>a[i];

      vector<ll> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
      
      int right = 0;
      for (int left = 0; left < n; ++left) {
          while (right < n && csa[right+1]-csa[left]<=k) {
          /* 実際に right を 1 進める */
          // ex: sum += a[right];
          ++right;
      }
      //cout<<left<<" "<<right<<" "<<csa[right]-csa[left]<<endl;
      //if(right==n) right--;
      ans+=right-left;
          /* break した状態で right は条件を満たす最大なので、何かする */
          // ex: res += (right - left);
      
          /* left をインクリメントする準備 */
           if (right == left) ++right;
          // ex: else sum -= a[left];
      } 
      cout<< ans << endl;
    }