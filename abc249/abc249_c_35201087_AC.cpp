/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/35201087
 * Submitted at: 2022-09-27 13:51:06
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_c
 * Result: AC
 * Execution Time: 18 ms
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
      int n,k,ans=0;
      cin>>n>>k;
      vector<string> s(20);
      rep(i,n) cin>>s[i];
      for(int i=0;i<(1<<n);i++){
        vector<int> alph(30,0);
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) {
                for(auto t:s[j]){
                    alph[t-'a']++;
                }
            }
        }
        rep(l,30){
            if(alph[l]==k) cnt++;
        }
        ans=max(ans,cnt);
      }
      cout<< ans << endl;
    }