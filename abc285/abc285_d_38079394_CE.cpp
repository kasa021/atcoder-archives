/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38079394
 * Submitted at: 2023-01-15 14:21:54
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_d
 * Result: CE
 * Execution Time: None ms
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
using P = pair<string,string>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;



int main(){
    int n;
    cin>>n;
    dsu uf(2*n);

    int size=0;
    map<string,int> mp;

    rep(i,n){
        string s,t;
        cin>>s>>t;
        if(mp.find(s)==mp.end()) mp[s]=size++;
        if(mp.find(t)==mp.end()) mp[t]=size++;
        if(uf.same(mp[s],mp[t])){
            cout<< "No" << endl;
            return 0;
        }
        uf.merge(mp[s].mp[t]);
    }
    cout<< "Yes" << endl;

    }
