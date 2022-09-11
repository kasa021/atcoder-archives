/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/34789174
 * Submitted at: 2022-09-11 12:34:37
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_a
 * Result: WA
 * Execution Time: 82 ms
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

int gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}

int lcm(ll a, ll b) {
    return a/gcd(a,b)*b;
}

int main(){
      int n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int cnt1=0,cnt2=0;
    rep(i,n){
        if(a[i]%(ll)2==0) cnt1++;
        else cnt2++;
    }
    if(cnt1==n||cnt2==n){
        cout<<"1"<<endl;
        return 0;
    }
    ll s=a[0];
    rep1(i,1,n){
      s=gcd(s,a[i]);
      //cout<<s<<endl;
    }
    if(s==1){
        cout<< "2" << endl;
    }else{
        cout<< "1" << endl;
    }
    //cout<<s<<endl;
    }