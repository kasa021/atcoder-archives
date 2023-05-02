/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc134/submissions/41117819
 * Submitted at: 2023-05-02 08:31:49
 * Problem URL: https://atcoder.jp/contests/arc134/tasks/arc134_b
 * Result: AC
 * Execution Time: 73 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<set<int>> cnt(26);
    int r=n;
    rep(i,n) cnt[s[i]-'a'].insert(i);
    rep(i,n){
        rep(j,26){
            if(s[i]-'a'>j){
                if(cnt[j].size() >0){
                    int k = *cnt[j].rbegin();
                    while(!(i < k && k < r)){
                        cnt[j].erase(k);
                        if(cnt[j].size() == 0) break;
                        k = *cnt[j].rbegin();
                    }
                    if(cnt[j].size() == 0) continue;
                    cnt[s[k]-'a'].erase(i);
                    swap(s[i],s[k]);
                    r=k;
                    break;
                }
            }
        }
    }
    cout<< s << endl;
}
