/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/36769742
 * Submitted at: 2022-11-25 07:56:51
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/arc082_a
 * Result: AC
 * Execution Time: 35 ms
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
      vector<int> cnt(100009,0);
      rep(i,n){
        int a;
        cin>>a;
        if(a==0){
            cnt[a]++;
            cnt[a+1]++;
        }else {
            cnt[a-1]++;
            cnt[a]++;
            cnt[a+1]++;
        }
      }
      int ans=0;
      rep(i,100009){
        ans=max(ans,cnt[i]);
      }
      cout<< ans << endl;
    }
