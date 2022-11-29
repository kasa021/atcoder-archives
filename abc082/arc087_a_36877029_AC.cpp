/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc082/submissions/36877029
 * Submitted at: 2022-11-29 07:40:21
 * Problem URL: https://atcoder.jp/contests/abc082/tasks/arc087_a
 * Result: AC
 * Execution Time: 66 ms
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
    int n,ans=0;
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
   
