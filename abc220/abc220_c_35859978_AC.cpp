/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/35859978
 * Submitted at: 2022-10-22 10:54:25
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_c
 * Result: AC
 * Execution Time: 40 ms
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
      ll n,suma=0,cnt=0,sum=0;
      cin>>n;
      vector<int> a(n+9);
      rep(i,n) cin>>a[i];
      ll x;
      cin>>x;
      rep(i,n){
        suma+=a[i];
      }
      cnt=(x/suma)*n;
      sum=(x/suma)*suma;
      rep(i,n){
        cnt++;
        sum+=a[i];
        if(sum>x){
            cout<< cnt << endl;
            return 0;
        }
      }
      
    }