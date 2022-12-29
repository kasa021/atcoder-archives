/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/37612458
 * Submitted at: 2022-12-29 07:11:14
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_j
 * Result: WA
 * Execution Time: 391 ms
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
// typedef modint1000000007 mint;

int op(int a,int b){//演算
  return max(a,b);
}

int e(){//単位元
  return (int)-1;
}
int v;
bool f(int a){
  return a<v;
}
int main()
{
  int n,q;
  cin>>n>>q;
  segtree<int,op,e> seg(n);
  rep(i,n){
    int a;
    cin>>a;
    seg.set(i,a);
  }
  rep(i,q){
    int t;
    cin>>t;
    if(t==1){
      int x;
      cin>>x>>v;
      seg.set(x-1,v);
    }else if(t==2){
      int l,r;
      cin>>l>>r;
      cout<<seg.prod(l-1,r)<<endl;
    }else {
      int x,v;
      cin>>x>>v;
      cout<< seg.max_right<f>(x-1)+1<< endl;
    }

  }
}
