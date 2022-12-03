/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/36939618
 * Submitted at: 2022-12-03 05:35:20
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/arc095_b
 * Result: AC
 * Execution Time: 44 ms
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
typedef modint1000000007 mint;
int main(){
      ll  n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      sort(all(a));
      ll ans1,ans2,can1,can2;
      ans1=a[n-1];
      
        can1=a[n-1]/2;
        can2=(a[n-1]+1)/2;
        ans2=a[0];
        ll now=abs(ans2-can1);
        rep(i,n){
            if(now>abs(can1-a[i]) || now>abs(can2-a[i])){
                now=abs(a[i]-can1);
                ans2=a[i];
            }
        }
        cout<< ans1<<" "<<ans2 << endl;
      
    }
