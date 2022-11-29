/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc071/submissions/36875933
 * Submitted at: 2022-11-29 06:28:11
 * Problem URL: https://atcoder.jp/contests/abc071/tasks/arc081_a
 * Result: WA
 * Execution Time: 73 ms
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
    ll n,M1=0,M2=0;
    cin>>n;
    map<ll,ll> mp;
    rep(i,n){
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto [i,v]:mp){
        if(v>=2){
            M2=M1;
            M1=i;
        }else if(v>=4){
            M2=i;
            M1=i;
        }
    }
    cout<< M1*M2 << endl;
}
   
