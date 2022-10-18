/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/35769232
 * Submitted at: 2022-10-18 10:00:06
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_c
 * Result: AC
 * Execution Time: 342 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


int main() {
   int n;
   cin>>n;
   vector<int> a(n+9);
   rep(i,n) cin>>a[i];
   int m1=0,m2=0;
   rep(i,n)m1=max(m1,a[i]);
   bool f=false;
   rep(i,n){
    if(a[i]==m1){
        if(!f){
            f=true;
        }else {
            m2=a[i];
        }
    }else {
        m2=max(m2,a[i]);
    }
   }
   rep(i,n){
    if(a[i]==m1) cout<< m2 << endl;
    else cout<< m1 << endl;
   }
}