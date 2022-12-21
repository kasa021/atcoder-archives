/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/37429197
 * Submitted at: 2022-12-21 13:17:47
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_d
 * Result: WA
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
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

ll combination(ll n,ll r){
    ll pai=1;
    vector<ll> a(r+1);
    rep(i,r) a[i]=i+1;
    while(n>r){
        pai*=n;
        n--;
        rep(i,r){
            if(pai%a[i]==0){
                pai/=a[i];
                a[i]=1;
            }
        }
    }
    return pai;
}

int main(){
    ll a,b,k,comb=0;
    cin>>a>>b>>k;
    ll t=combination(a+b,a);
    //cout<< t << endl;
    ll l=1,r=t,mid=0,cnt=0;
    string ans="";
    while(r>l){
        cnt++;
       // cout<< l<<" "<<r << endl;
        mid=(r+l)/2;
        //cout<< mid << endl;
        if(mid<k){
            if(b){
                ans+='b';
                b--;
            }else {
                ans+='a';
                a--;
            }
            l=mid+1;
        }else {
            if(a){
                ans+='a';
                a--;
            }else {
                ans+='b';
                b--;
            }
            r=mid;
        }
    }
    if(a) {
        rep(i,a) ans+='a';
    }
    else {
        rep(i,b) ans+='b';
    }
    // cout<< a<<" "<<b<< endl;
    // cout<< cnt << endl;
    cout<< ans << endl;
    // ll v=118264581564861424;
    

    }
