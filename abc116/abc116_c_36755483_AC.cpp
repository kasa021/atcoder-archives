/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc116/submissions/36755483
 * Submitted at: 2022-11-24 11:11:25
 * Problem URL: https://atcoder.jp/contests/abc116/tasks/abc116_c
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
      int n,ans=0,sum=1;
      cin>>n;
      vector<int> h(n);
      rep(i,n) cin>>h[i];
      while(sum>0){
        sum=0;
        int cnt=0;
        // rep(j,n) cout<< h[j] << " ";
        //     cout<<ans<<endl;
        rep(i,n){
            sum+=h[i];
            if(h[i]>0){
                h[i]--;
                cnt++;
                if(i==n-1) ans++;
                //cout<< "1 "<<cnt << endl;
            }else if(h[i]==0 && cnt>0){
                ans++;
                cnt=0;
                //cout<< "2 " <<cnt <<endl;
            }
            
        }
      }
      cout<< ans << endl;
    }