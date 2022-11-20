/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc116/submissions/36686831
 * Submitted at: 2022-11-20 17:26:00
 * Problem URL: https://atcoder.jp/contests/abc116/tasks/abc116_c
 * Result: WA
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
      int n,sum=0,cnt=0,ans=0;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i],sum+=a[i];
      while(cnt<sum){
        //rep(i,n) cout<< a[i] << " ";
        //cout<<endl;
        rep(i,n){
            a[i]--;
            if(a[i]>=0){
                cnt++;
            }else if(i>0 && a[i-1]>=0 && i!=n-1) ans++;
        }
        ans++;
      }
      cout<< ans << endl;
    }