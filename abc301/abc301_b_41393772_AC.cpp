/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/41393772
 * Submitted at: 2023-05-13 14:04:26
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_b
 * Result: AC
 * Execution Time: 7 ms
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
      rep(i,n-1){
        if(abs(a[i]-a[i+1])==1){
            cout<< a[i] << " ";
        }else {
            if(a[i]<a[i+1]){
                rep1(j,a[i],a[i+1]) cout<<j<<" ";
            }else {
                for(int j=a[i]; j>a[i+1];j--) cout<<j<<" ";
            }
        }
      }
      cout<<a[n-1]<<endl;
    }