/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/41869717
 * Submitted at: 2023-05-31 08:43:42
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_c
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

int main(){
    string s;
    ll k;
    cin >> s >> k;
    rep(i,s.size()){
        if(s[i]!='1'){
            cout << s[i] << endl;
            return 0;
        }
        if(i==k-1){
            cout << 1 << endl;
            return 0;
        }
    }  
    }