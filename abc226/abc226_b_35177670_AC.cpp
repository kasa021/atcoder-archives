/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/35177670
 * Submitted at: 2022-09-26 09:25:55
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_b
 * Result: AC
 * Execution Time: 194 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    int n,b;
    cin>>n;

    vector<int> l(n);
    vector<vector<int>> a(n);
    rep(i,n){
        cin>>l[i];
        rep(j,l[i]){
            cin>>b;
            a[i].push_back(b);
        }
    }

    set<vector<int>> s;
    rep(i,n){
        s.insert(a[i]);
    }
    cout<< s.size() << endl;

    
    }