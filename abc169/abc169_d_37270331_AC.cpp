/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/37270331
 * Submitted at: 2022-12-14 12:34:38
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_d
 * Result: AC
 * Execution Time: 17 ms
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
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;


vector<P> primef(ll n){
    ll x=n;
    vector<P> res;
    for(ll i=2;i*i<=n;i++){
        ll cnt=0;
        if(x%i) continue;
        while(x%i==0){
            cnt++;
            x/=i;
        }
        res.push_back(P(i,cnt));
    }
    if(x!=1) res.push_back(P(x,1));
    return res;
}

int main(){
    ll n,cnt=0;
    cin>>n;
    vector<P> prm=primef(n);
    rep(i,(int)prm.size()){
        auto [p,q]=prm[i];
        //cout<< p <<" "<<q<< endl;
        ll sum=0,k=1;
        while(sum+k<=q){
            sum+=k;
            k++;
            cnt++;
        }
        //cout<< k << endl;
        
    }
    cout<< cnt << endl;
    }




