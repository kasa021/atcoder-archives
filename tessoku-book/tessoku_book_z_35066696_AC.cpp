/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35066696
 * Submitted at: 2022-09-23 12:14:18
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_z
 * Result: AC
 * Execution Time: 34 ms
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


bool isprime(int x){
    int i;
    if(x < 2)return 0;
    else if(x == 2) return 1;
    if(x%2 == 0) return 0;
    for(i = 3; i*i <= x; i += 2) if(x%i == 0) return 0;
    return 1;
}

int main(){
      int q;
      cin>>q;
      int a[q];
      rep(i,q) cin>>a[i];
      rep(i,q){
        if(isprime(a[i])) cout<< "Yes" << endl;
        else cout<< "No" << endl;
      }
      
    }