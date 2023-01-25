/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/38317744
 * Submitted at: 2023-01-25 09:46:39
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_e
 * Result: AC
 * Execution Time: 83 ms
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
//typedef modint1000000007 mint;


int main(){
    int n,x=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
        x^=a[i];
        //cout<< x << endl;
    }
    //cout<< x << endl;
    rep(i,n){
        int ans=x^a[i];
        cout<< ans<<" ";
    }cout<<endl;
    }
