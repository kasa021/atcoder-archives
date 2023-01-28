/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc287/submissions/38403928
 * Submitted at: 2023-01-28 12:41:03
 * Problem URL: https://atcoder.jp/contests/abc287/tasks/abc287_c
 * Result: WA
 * Execution Time: 127 ms
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
    int n,m;
    cin>>n>>m;
    graph g(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int one=0,two=0,zero=0,over=0;
    rep(i,n){
        if((int)g[i].size()==1) one++;
        else if((int)g[i].size()==2) two++;
        else if((int)g[i].size()==0){
            cout<< "No" << endl;
            return 0;
        }
        else{
            cout<< "No" << endl;
            return 0;
        }
        //cout<< (int)g[i].size() << endl;
    }
        if(one==2 && two==n-2)cout<< "Yes" << endl;
        else cout<< "No" << endl;
    }
