/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc287/submissions/38417966
 * Submitted at: 2023-01-28 13:25:07
 * Problem URL: https://atcoder.jp/contests/abc287/tasks/abc287_d
 * Result: AC
 * Execution Time: 417 ms
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
    string s,t;
    cin>>s>>t;
    string ss=s.substr((int)s.size()-(int)t.size(),(int)t.size());
    vector<bool> cnt((int)t.size());
    int tc=0,fc=0;
    rep(i,(int)t.size()){
        if(t[i]==ss[i] || t[i]=='?' || ss[i]== '?'){
            cnt[i]=true;
            tc++;
        }else {
            cnt[i]=false;
            fc++;
        }
    }
    if(tc==(int)t.size()){
        cout<< "Yes" << endl;
    }else cout<< "No" << endl;
    rep(i,(int)t.size()){
        ss[i]=s[i];
        if(t[i]==ss[i] || t[i]=='?' || ss[i]== '?'){
            if(!cnt[i]){
                cnt[i]=true;
                tc++;
                fc--;
            }
        }else {
            if(cnt[i]){
                cnt[i]=false;
                tc--;
                fc++;
            }
        }
        if(tc==(int)t.size()){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
    }
    }
