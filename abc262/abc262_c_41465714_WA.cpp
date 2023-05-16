/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/41465714
 * Submitted at: 2023-05-16 15:06:08
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_c
 * Result: WA
 * Execution Time: 112 ms
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
      int n,cnt=0,same=0,not_same=0;
      cin>>n;
      vector<int> a(n);
      rep(i,n){
        cin>>a[i];
        a[i]--;
        if(i==a[i]) cnt++;
      }
      int ans=0;
      rep(i,n){
        if(a[i]==i) same+=cnt-1;
        else {
            if(a[a[i]]==i) not_same++;
        }
      }
      cout<< same/2+not_same/2 << endl;
    }