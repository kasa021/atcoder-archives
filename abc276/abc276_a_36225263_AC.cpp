/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36225263
 * Submitted at: 2022-11-05 12:03:13
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_a
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
    int ans=-1;
    cin>>s;
    rep(i,(int)s.size()){
        if(s[i]=='a'){
            ans=i;
        }
    }
    if(ans!=-1) cout<< ans+1 << endl;
    else cout<< "-1" << endl;
}