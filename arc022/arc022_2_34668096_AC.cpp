/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc022/submissions/34668096
 * Submitted at: 2022-09-07 06:22:10
 * Problem URL: https://atcoder.jp/contests/arc022/tasks/arc022_2
 * Result: AC
 * Execution Time: 63 ms
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
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      
      set<int> st;
      st.insert(a[0]);
      int right = 1,ans=0;
      for (int left = 0; left < n; ++left) {
          while (right < n && (!st.count(a[right]))) {
          st.insert(a[right]);
          ++right;
      }
      //cout<<left<<" "<<right<<endl;
      ans=max(ans,right-left);
      
          /* break した状態で right は条件を満たす最大なので、何かする */
          // ex: res += (right - left);
      
          /* left をインクリメントする準備 */
          if (right == left) ++right;
          else st.erase(a[left]);
          // ex: else sum -= a[left];
      }
      cout<<ans<<endl;
    }