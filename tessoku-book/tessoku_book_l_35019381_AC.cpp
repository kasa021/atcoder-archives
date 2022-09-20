/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35019381
 * Submitted at: 2022-09-20 16:01:45
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_l
 * Result: AC
 * Execution Time: 42 ms
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
ll n,k;
vector<ll> a(100009);

bool cheak(ll x){
    ll sum=0;
    rep(i,n) sum+=x/a[i];
    if(sum>=k) return true;
     return false;
}
int main(){
      //int n,k;
      cin>>n>>k;
      //vector<int> a(n);
      rep(i,n) cin>>a[i];

      ll left=1,right=1000000000;
      while(left<right){
        ll mid=(left+right)/2;
        bool ans=cheak(mid);
        if(ans==true) right=mid;
        if(ans==false) left=mid+1;
        //cout<< left<<" "<<right << endl;
      }
      cout<< left << endl;
    }