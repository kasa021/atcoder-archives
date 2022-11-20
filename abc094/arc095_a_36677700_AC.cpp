/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/36677700
 * Submitted at: 2022-11-20 13:05:31
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/arc095_a
 * Result: AC
 * Execution Time: 360 ms
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
      vector<int> a(n+1),b(n+1);
      rep(i,n) {
        cin>>a[i];
      }
      b=a;
      sort(all(b));
      rep(i,n){
        if(a[i]<=b[n/2]){
            cout<< b[n/2+1] << endl;
        }else cout<< b[n/2] << endl;
      }
    }