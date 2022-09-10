/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34752063
 * Submitted at: 2022-09-10 13:14:53
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_c
 * Result: TLE
 * Execution Time: 2205 ms
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
      int n,cnt=0,ans=0;
      cin>>n;
      vector<int> p(n),a(n);
      rep(i,n) cin>>p[i];
      rep(i,n) a[i]=i;
      rep(j,n){
        cnt=0;
        rep(i,n){
            
            if(a[i]==0) {
                if(p[i]==a[i]||p[i]==(a[i]+1)%n||p[i]==n-1) cnt++;
            }else {
                if(p[i]==a[i]||p[i]==(a[i]+1)%n||p[i]==(a[i]-1)%n) cnt++;
            }
        }
        ans=max(ans,cnt);
        rep(i,n) {
            a[i]++;
            a[i]%=n;
        }
      }
      cout<<ans<<endl;
      
    
    }