/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/38531053
 * Submitted at: 2023-02-01 14:25:11
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
 * Result: TLE
 * Execution Time: 2205 ms
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
    vector<int> a;
    rep(i,n){
        int q;
        cin>>q;
        if(q==1){
            int x;
            cin>>x;
            a.push_back(x);
        }else if(q==2){
            cout<< a[0] << endl;
            a.erase(a.begin());
        }else {
            sort(all(a));
        }
    }
    }
