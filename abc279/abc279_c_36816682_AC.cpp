/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36816682
 * Submitted at: 2022-11-26 12:51:17
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_c
 * Result: AC
 * Execution Time: 103 ms
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
    
    set<string> st;
    map<string,int> mp;
    rep(i,w) {
        st.insert(p[i]);
        mp[p[i]]++;
    }
    
    rep(i,w){
        if(mp.count(q[i])){
            if(mp[q[i]]>0) mp[q[i]]--;
            else {
                cout<< "No" << endl;
                return 0;
            }
        }else {
            cout<< "No" << endl;
            return 0;
        }
    }
    cout<< "Yes" << endl;

}
   