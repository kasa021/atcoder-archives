/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36801613
 * Submitted at: 2022-11-26 12:08:24
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_b
 * Result: AC
 * Execution Time: 7 ms
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
    string s,t;
    cin>>s>>t;
    if((int)s.size()<(int)t.size()){
        cout<< "No" << endl;
        return 0;
    }
    rep(i,(int)s.size()){
        bool f=true;
        rep(j,(int)t.size()){
            if(i+j>=(int)s.size()){
                f=false;
                continue;
            }
            if(s[i+j]!=t[j]) f=false;
        }
        if(f) {
            cout<< "Yes" << endl;
            return 0;
        }
    }
    cout<< "No" << endl;
}
   
