/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/34137892
 * Submitted at: 2022-08-19 05:24:15
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;


int main() {
    bool frag = true;
    int n,m,ans = 0; cin >> n >> m;
    vector<vector<int>> button(m,vector<int>(n,0));
    vector<int> light(m);
    rep(i,m){
        int k; cin >> k;
        rep(j,k){
            int a; cin >> a;
            button[i][a-1]++;
        }
    }
 
    rep(i,m) cin >> light[i];
    for(int i=0;i<(1LL << n);i++){
        vector<int> bright(m,0);
        rep(j,m){
            rep(k,n){
                if(i&(1 << k) && button[j][k]){bright[j]++; bright[j] %= 2;}
            }
        }
        rep(j,m){
            if(light[j] != bright[j]){
                frag = false;
                break;
            }
        }
        if(frag)ans++;
        frag = true;
    }
    cout << ans << endl;
    return 0;
}