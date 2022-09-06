/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/34660382
 * Submitted at: 2022-09-06 15:04:44
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_d
 * Result: WA
 * Execution Time: 20 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    string s;
    cin>>s;
    int k;
    cin>>k;
    int size=s.size();
    int right = 0,ans=0,cnt=0;
    if(s[0]=='.')cnt++;
    for (int left = 0; left < size; ++left) {
        if(left!=0&&s[left-1]=='.') cnt--;
        while (right <= size && cnt<=k) {
        ans=max(ans,right-left);
        if(right!=size&&s[right]=='.') cnt++;
        right++;
    }
    
    
        /* break した状態で right は条件を満たす最大なので、何かする */
        // ex: res += (right - left);
    
        /* left をインクリメントする準備 */
        // ex: if (right == left) ++right;
        // ex: else sum -= a[left];
    }
    cout<<ans<<endl;
}