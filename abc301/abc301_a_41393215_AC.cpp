/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/41393215
 * Submitted at: 2023-05-13 13:59:15
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_a
 * Result: AC
 * Execution Time: 7 ms
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
     int n;
     cin>>n;
     string s;
     cin>>s;
     int t=0,a=0;
     rep(i,n){
        if(s[i]=='T') t++;
        else a++;
     }
     if(a>t){
        cout<< 'A' << endl;
     }else if(a<t){
        cout<< 'T' << endl;
     }else {
        int aa=0,tt=0;
        rep(i,n){
            if(s[i]=='T'){
                tt++;
            }else aa++;
            if(aa==a){
                cout<< 'A' << endl;
                return 0;
            }else if(tt==t){
                cout<< 'T' << endl;
                return 0;
            }
        }
     }
    }