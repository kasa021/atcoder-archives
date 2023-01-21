/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc286/submissions/38198074
 * Submitted at: 2023-01-21 12:10:37
 * Problem URL: https://atcoder.jp/contests/abc286/tasks/abc286_b
 * Result: AC
 * Execution Time: 12 ms
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    rep(i,(int)s.size()){
        cout<<s[i];
        if(i!=n-1 &&s[i]=='n' && s[i+1]=='a') cout<<'y';
    }
    cout<<endl;
    }
