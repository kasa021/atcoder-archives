/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc154/submissions/38256187
 * Submitted at: 2023-01-22 12:27:59
 * Problem URL: https://atcoder.jp/contests/arc154/tasks/arc154_a
 * Result: AC
 * Execution Time: 25 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
typedef modint998244353 mint;


int main(){
    int n;
    cin>>n;
    string a,b,mn,mx;
    cin>>a>>b;
    rep(i,n){
        int aa=a[i]-'0',bb=b[i]-'0';
        if(aa>=bb){
            mn+=b[i];
            mx+=a[i];
        }else {
            mn+=a[i];
            mx+=b[i];
        }
    }
    // cout<< mn << endl;
    // cout<< mx << endl;
    mint ans=0,nowa=0,nowb=0;

    vector<mint> two(200009,0),five(200009,0);
    two[0]=1,five[0]=1;
    rep1(i,1,200001){
        two[i]=two[i-1]*2;
        five[i]=five[i-1]*5;
    }
    
    for(int i=n-1;i>=0;i--){
        mint p=mn[i]-'0',q=mx[i]-'0';
        nowa+=(mn[i]-'0')*two[n-1-i]*five[n-1-i];
        nowb+=(mx[i]-'0')*two[n-1-i]*five[n-1-i];
    }
    //cout<< nowa.val()<<" "<<nowb.val() << endl;
    ans=nowa*nowb;
    cout<< ans.val() << endl;
}