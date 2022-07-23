/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33455498
 * Submitted at: 2022-07-23 12:30:50
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
     int l1,r1,l2,r2;
     cin>>l1>>r1>>l2>>r2;
     vector<int> a(101,0);
     for(int i=l1;i<=r1;i++){
        a[i]++;
     }
     for(int i=l2;i<=r2;i++){
        a[i]++;
     }
     int ans=0;
     rep(i,101){
        //cout<<a[i]<<endl;
        if(a[i]==2)ans++;
        
     }
     if(ans==1||ans==0) {
            cout<<'0'<<endl;
            return 0;
        }
     cout<<ans-1<<endl;
    }