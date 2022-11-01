/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/36136621
 * Submitted at: 2022-11-01 10:19:01
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define graph vector<vector<ll>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

vector<ll> enum_div(ll n){
    vector<ll> ret;
    ret.push_back(1);
    ret.push_back(n);
    for(ll i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            ret.push_back(i);
            if(i*i != n){
                ret.push_back(n/i);
           }
       }
   }
return ret;
}

int main() {
   ll n,ans=0;
   cin>>n;
   vector<ll> div=enum_div(n);
   sort(all(div));
//    for(auto v:div){
//     cout<<v<<" ";
//    }cout<<endl;
   ll size=(ll)div.size();
   if(size%2==0){
    ll r=size/2,l=r-1;
    ll a=div[r],b=div[l];
    //cout<< a<<" "<<b << endl;
    ll cnt=0;
    while(a){
        a/=10;
        cnt++;
    }
    ans=cnt;
    cnt=0;
    while(b){
        b/=10;
        cnt++;
    }
    ans=max(ans,cnt);
   }else {
    ll r=size/2;
    ll a=div[r];
    //cout<< a << endl;
    while(a){
        a/=10;
        ans++;
    }
   }
   cout<< ans << endl;
}