/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36249256
 * Submitted at: 2022-11-05 12:57:14
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_d
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;



int main() {
    int n;
    ll ans=0;
    cin>>n;
    vector<int> a(n);
    vector<int> cnt2(n,0),cnt3(n,0);
    rep(i,n) cin>>a[i];

    bool f=true;//a[i]がすべて同じ時
    rep(i,n-1){
        if(a[i]!=a[i+1]) f=false;
    }
    if(f) cout<< "0" << endl;

    rep(i,n){
        int res2=0,res3=0;
        if(a[i]!=1){
            while(a[i]%2!=0){
                a[i]/=2;
                res2++;
            }
            cnt2[i]=res2;

            while(a[i]%3!=0){
                a[i]/=3;
                res3++;
            }
            cnt3[i]=res3;
        }
    }
    f=true;
    rep(i,n-1){
        if(a[i]!=a[i+1]) f=false;
    }
    if(f) {
        sort(all(cnt2));
        sort(all(cnt3));
        rep1(i,1,n){
        ans+=cnt2[i]-cnt2[0];
        ans+=cnt3[i]-cnt3[0];
    }
    cout<< ans << endl;
    }else {
        cout<< "-1" << endl;
    }

}