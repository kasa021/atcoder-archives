/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35018684
 * Submitted at: 2022-09-20 15:15:49
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_j
 * Result: AC
 * Execution Time: 209 ms
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
      vector<int> maxl(n),maxr(n);
      maxl[0]=a[0];
      rep1(i,1,n){
        maxl[i]=max(maxl[i-1],a[i]);
      }
      maxr[n-1]=a[n-1];
      for(int i=n-2;i>=0;i--){
        maxr[i]=max(maxr[i+1],a[i]);
      }
      int d;
      cin>>d;
      rep(i,d){
        int l,r;
        cin>>l>>r;
        l--,r--;
        cout<<max(maxl[l-1],maxr[r+1])<<endl;
      }
    }