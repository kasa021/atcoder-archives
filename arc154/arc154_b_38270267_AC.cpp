/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc154/submissions/38270267
 * Submitted at: 2023-01-22 15:29:08
 * Problem URL: https://atcoder.jp/contests/arc154/tasks/arc154_b
 * Result: AC
 * Execution Time: 31 ms
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
//typedef modint998244353 mint;


int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    string a=s,b=t;
    sort(all(a));sort(all(b));
    if(a!=b){
        cout<< -1 << endl;
        return 0;
    }
    ll now=n-1;
    for(int i=n-1;i>=0;i--){
        while(now>=0){
        if(t[now] == s[i]){
            if(now==0){
                cout<< i << endl;
                return 0;
            }
            now--;
            break;
        }
        now--;
        }
        if(now==-1){
            cout<< i+1 << endl;
            return 0;
        }
    }
    cout<< 0 << endl;
}