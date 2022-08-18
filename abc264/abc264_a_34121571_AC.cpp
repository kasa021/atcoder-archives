/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/34121571
 * Submitted at: 2022-08-18 06:04:55
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define rep3(i, n) for (ll i = 0; i < (ll)(n); i++)
#define graph vector<vector<int>>
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;
//const int inf=1<<29;

int main(){
    string s="atcoder";
    int l,r;
    cin>>l>>r;
    while(l!=r+1){
        cout<<s[l-1];
        l++;
    }
    
}