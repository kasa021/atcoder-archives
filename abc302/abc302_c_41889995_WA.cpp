/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41889995
 * Submitted at: 2023-06-01 10:16:59
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: WA
 * Execution Time: 110 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    rep(i,n) cin>>s[i];
    sort(all(s));
    do{
        bool ok=true;
        rep(i,n-1){
            map<char,int> mp;
            rep(j,m){
                mp[s[i][j]]++;
                mp[s[i+1][j]]--;
            }
            int c=0,d=0;
            for(auto x:mp){
                if(x.second>0) c++;
                if(x.second<0) d++;
            }
            if(c!=1||d!=1) ok=false;
        }
        if(ok){
            cout<<"Yes"<<endl;
            return 0;
        }
       }while(next_permutation(all(s)));
       cout<<"No"<<endl;
}