/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc064/submissions/38290073
 * Submitted at: 2023-01-23 16:41:09
 * Problem URL: https://atcoder.jp/contests/abc064/tasks/abc064_d
 * Result: AC
 * Execution Time: 8 ms
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
    int idx=0,l=0,r=0;
    rep(i,n){
        if(s[i]=='(') l++;
        else {
            if(l==0) r++; 
            else l--;
        }
    }
    //cout<< l<<" "<<r << endl;
    rep(i,l){
        s=s+")";
    }
    rep(i,r){
        s="("+s;
    }
    cout<< s << endl;
    }
