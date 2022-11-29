/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc082/submissions/36877019
 * Submitted at: 2022-11-29 07:39:46
 * Problem URL: https://atcoder.jp/contests/abc082/tasks/arc087_a
 * Result: WA
 * Execution Time: 67 ms
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
    int n,ans;
    cin>>n;
    map<int,int> mp;
    rep(i,n){
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto [i,v]:mp){
        if(i<v){
            ans+=v-i;
        }else if(i>v){
            ans+=v;
        }
    }
    cout<< ans << endl;
}
   
