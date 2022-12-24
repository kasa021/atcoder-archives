/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37487234
 * Submitted at: 2022-12-24 12:03:52
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_b
 * Result: AC
 * Execution Time: 205 ms
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
//typedef modint1000000007 mint;
int main(){
      int n;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      int q;
      cin>>q;
      rep(i,q){
        int t;
        cin>>t;
        if(t==1){
            int k,l;
            cin>>k>>l;
            k--;
            a[k]=l;
        }else {
            int k;
            cin>>k;
            k--;
            cout<< a[k] << endl;
        }
      }
    }
