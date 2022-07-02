/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32880233
 * Submitted at: 2022-07-02 06:47:36
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_c
 * Result: WA
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    ll a,d,n,x,ans,max,min;
    cin>>x>>a>>d>>n;

      if(d<0){
    long long fi=a+d*(n-1);
    a=fi;
    d*=-1;
  }
    if(d==0){
        cout<<'0'<<endl;
        return 0;
    }else if((x-a)%d==0){ 
        ans=((x-a)/d)+1;
    if(ans<=n){
        cout<<'0'<<endl;
        return 0;
    }else{
        cout<<d*(ans-n)<<endl;
        return 0;
    }
    }else{
        max=a+d*(n-1);
        min=a;
        if(max<x){
            cout<<x-max<<endl;
            return 0;
        }else if(min>x){
            cout<<min-x<<endl;
            return 0;
        }else{
            ll p=(x-a)%d;
            ll q=d-p;
            if(p<=q) cout<<p<<endl;
            else cout<<q<<endl;
        }
    }
    return 0;
}