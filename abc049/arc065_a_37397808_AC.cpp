/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc049/submissions/37397808
 * Submitted at: 2022-12-19 15:07:12
 * Problem URL: https://atcoder.jp/contests/abc049/tasks/arc065_a
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
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;


int main(){
    string s,now="";cin>>s;
    string a[4];
    a[0]="maerd";
    a[1]="remaerd";
    a[2]="esare";
    a[3]="resare";
    int idx=s.size()-1;
    bool f=false;
    while(idx>=0){
        now+=s[idx];
        idx--;
        f=false;
        rep(i,4){
            if(now==a[i]) f=true;
        }
        if(f) now="";
        if((int)now.size()>8){
            cout<< "NO" << endl;
            return 0;
        }
    }
    if(f) cout<< "YES" << endl;
    else cout<< "NO" << endl;
    }
