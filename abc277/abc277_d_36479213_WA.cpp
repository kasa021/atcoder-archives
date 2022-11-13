/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36479213
 * Submitted at: 2022-11-13 13:54:43
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_d
 * Result: WA
 * Execution Time: 83 ms
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
      int n,m;
      cin>>n>>m;
      if(n==1) {
        cout<< "0" << endl;
        return 0;
      }
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      sort(all(a));
      vector<ll> b(n);
      int right=0;
      for(int left=0;left<n;left++){
        while(a[right]==a[(right+1)%n]||(a[right]+1)%m==a[(right+1)%n]){
            //cout<< a[right]<<" "<<a[(right+1)%m] << endl;
            right=(right+1)%m;
            if(right==left){
                cout<< "0" << endl;
                return 0;
            }
        }
        b[left]=right+1;
        if(left==right) right++;
      }

      vector<ll> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
      

      vector<ll> trush(n);
      ll t=0;
      rep(i,n){
        if(i<b[i]) t=max(t,csa[b[i]]-csa[i]);
        else {
            t=max(t,csa[n]-(csa[i]-csa[b[i]]));
        }
      }
      cout<< csa[n]-t << endl;

    
    
    }