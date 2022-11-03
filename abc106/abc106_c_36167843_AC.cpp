/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/36167843
 * Submitted at: 2022-11-03 02:45:03
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_c
 * Result: AC
 * Execution Time: 6 ms
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
    string s;
    ll k;
    int idx=0;
    cin>>s>>k;
    if(k<(int)s.size()&&s[k-1]=='1'){
        cout<< s[k-1] << endl;
        return 0;
    }
    rep(i,(int)s.size()){
        if(s[i]!='1'){
            idx=i;
            break;
        }
    }
    cout<< s[idx] << endl;
}