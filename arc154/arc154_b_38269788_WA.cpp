/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc154/submissions/38269788
 * Submitted at: 2023-01-22 15:08:01
 * Problem URL: https://atcoder.jp/contests/arc154/tasks/arc154_b
 * Result: WA
 * Execution Time: 16 ms
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
//typedef modint998244353 mint;


int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> als(30),alt(30);
    rep(i,n){
        als[s[i]-'a']++;
        alt[t[i]-'a']++;
    }
    bool f=true;
    rep(i,30){
        if(als[i]!=alt[i]) f=false;
    }
    if(!f) cout<< -1 << endl;
    else{
        int idx=n-1,cnt;
        for(int i=n-1;i>=0;i--){
            if(idx<0) break;
            cnt=i;
            for(int j=idx;j>=0;j--){
                if(s[i]==t[j]){
                    idx=j-1;
                    break;
                }else idx=j-1;
            }
        }
        cout<< cnt<< endl;
    }
}