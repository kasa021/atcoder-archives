/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36814099
 * Submitted at: 2022-11-26 12:40:43
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_c
 * Result: WA
 * Execution Time: 2206 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


int main() {
    int h,w;
    cin>>h>>w;
    vector<string> s(h),t(h);
    rep(i,h) cin>>s[i];
    rep(i,h) cin>>t[i];
    vector<string> p(w),q(w);
    
    rep(i,w){
        rep(j,h){
            p[i].push_back(s[j][i]);
            q[i].push_back(t[j][i]);
        }
    }
    // rep(i,w){
        
    //         cout<< p[i] << endl;
    
    // }
    // cout<<endl;
    // rep(i,w){
    //     //rep(j,h){
    //         cout<< q[i] << endl;
    //     //}cout << endl;
    // }
    vector<int> cnt(w,0);
    rep(i,w){
        rep(j,w){
            if(p[i]==q[j]){
                // cout<< "ans" << endl;
                // cout<< p[i] << endl;
                // cout<< q[j] << endl;
                if(cnt[j]==0){
                    cnt[j]++;
                    continue;
                }
            }
        }
    }
    bool f=true;
    rep(i,w){
        //cout<< cnt[i] << endl;
        if(cnt[i]==0) f=false;
    }
    if(f) cout<< "Yes" << endl;
    else cout<< "No" << endl;

}
   

   
