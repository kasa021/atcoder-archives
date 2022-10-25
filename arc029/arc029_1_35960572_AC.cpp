/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc029/submissions/35960572
 * Submitted at: 2022-10-25 10:50:38
 * Problem URL: https://atcoder.jp/contests/arc029/tasks/arc029_1
 * Result: AC
 * Execution Time: 5 ms
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
   int n,ans=10000000;
   cin>>n;
   vector<int> t(n);
   rep(i,n) cin>>t[i];

   rep(i,(1<<n)){
    int p=0,q=0;
    rep(j,n){
        if(i & (1<<j)){
            p+=t[j];
        }else {
            q+=t[j];
        }
    }
    ans=min(ans,max(p,q));
   }
   cout<< ans << endl;
}