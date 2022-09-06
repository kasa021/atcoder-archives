/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/34660497
 * Submitted at: 2022-09-06 15:12:03
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_d
 * Result: AC
 * Execution Time: 14 ms
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
    
    vector<int> cnt(size+1);
    rep(i,size){
        if(s[i]=='.') cnt[i+1]=cnt[i]+1;
        else cnt[i+1]=cnt[i];
    }
    int ans=0;
    int right = 0;
    for (int left = 0; left < size; ++left) {
        while (right < size && cnt[right+1]-cnt[left]<=k) {
        /* 実際に right を 1 進める */
        // ex: sum += a[right];
        ++right;
    }
    ans=max(ans,right-left);
    
        /* break した状態で right は条件を満たす最大なので、何かする */
        // ex: res += (right - left);
    
        /* left をインクリメントする準備 */
        // ex: if (right == left) ++right;
        // ex: else sum -= a[left];
    }
    cout<<ans<<endl;
    
}