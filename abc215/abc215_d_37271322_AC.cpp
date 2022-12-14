/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc215/submissions/37271322
 * Submitted at: 2022-12-14 13:23:56
 * Problem URL: https://atcoder.jp/contests/abc215/tasks/abc215_d
 * Result: AC
 * Execution Time: 248 ms
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

vector<P> primef(int n){
    int x=n;
    vector<P> res;
    for(int i=2;i*i<=n;i++){
        int cnt=0;
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
    int n,m,cnt=0;
    cin>>n>>m;
    vector<int> a(n),ans;
    rep(i,n)cin>>a[i];
    vector<bool> prime(m+9,true);

    rep(i,n){
        if(a[i]==1)continue;
        else {
            vector<P> p=primef(a[i]);
            rep(j,(int)p.size()){
                auto [s,t]=p[j];
                if(prime[s]){
                    for(int k=s;k<=m;k+=s) prime[k]=false;
                }
            }
        }
    }

    rep1(i,1,m+1){
        if(prime[i]) ans.push_back(i);
    }

    cout<< (int)ans.size() << endl;
    for(auto v:ans) cout<< v << endl;

    

    }

