/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc150/submissions/35813336
 * Submitted at: 2022-10-20 14:30:58
 * Problem URL: https://atcoder.jp/contests/abc150/tasks/abc150_c
 * Result: AC
 * Execution Time: 6 ms
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
      int n,a,b,cnt=1;
      cin>>n;
      vector<int> p(n),q(n),num(n);
      rep(i,n) num[i]=i+1;
      rep(i,n) cin>>p[i];
      rep(i,n) cin>>q[i];

      do{
        if(p==num) a=cnt;
        if(q==num) b=cnt;
        cnt++;
      }while(next_permutation(all(num)));
      cout<< abs(a-b) << endl;
    }