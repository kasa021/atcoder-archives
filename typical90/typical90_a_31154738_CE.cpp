/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/31154738
 * Submitted at: 2022-04-22 11:44:00
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_a
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;

ll n,k,l;
ll a[100009];

bool solve(ll m){
    ll pre =0,count=0;
    for(int i=1;i<=n;i++){
        if(a[i]-pre>=m && l-a[i]>=m){
            count++;//切れる数のカウント
            pre=a[i];
        }
    }
    if(count>=k) return true;
    else return false;
}
int main(){
   cin>>n>>l>>k;
   for(int i =1;i<=n;i++) cin>>a[i];
   
   //二分探索
   ll left =-1;
   ll right =l+1;
   while (right -left>1){
       ll mid = left+ (right - left)/2;
       if(solve(mid) == false)   right = mid      //false はmが大きいということ
       else left = mid;//leftはmがちいさい
   }
   cout<<left<<endl;
   
   return 0;

    }