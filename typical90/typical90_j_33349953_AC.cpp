/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/33349953
 * Submitted at: 2022-07-18 20:04:53
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_j
 * Result: AC
 * Execution Time: 223 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      int n;
      cin>>n;
      int c[n+1],p[n+1];
      rep(i,n) cin>>c[i]>>p[i];
      int q;
      cin>>q;
      int l[q+1],r[q+1];
      rep(i,q) cin>>l[i]>>r[i];
      int rui1[n+1]={0},rui2[n+1]={0};
      rep(i,n){
        if(c[i]==1) rui1[i]+=(p[i]+rui1[i-1]);
        else rui1[i]=rui1[i-1];
        if(c[i]==2) rui2[i]+=(p[i]+rui2[i-1]);
        else rui2[i]=rui2[i-1];
      }
      //rep(i,n)cout<<rui1[i]<<" "<<rui2[i]<<endl;
      rep(i,q){
        cout<<rui1[r[i]]-rui1[l[i]-1]<<" "<<rui2[r[i]]-rui2[l[i]-1]<<endl;
      }
      return 0;
    }