/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/40953819
 * Submitted at: 2023-04-26 04:43:12
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_c
 * Result: AC
 * Execution Time: 103 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int n,now=0,stock=0,cnt=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    stock=n;
    sort(all(a));
    a.erase(unique(all(a)),a.end());
    stock-=a.size();
    // cout<< stock << endl;
    deque<int> dq;
    rep(i,a.size()) dq.push_back(a[i]);
    while(!dq.empty()){
        int ft=dq.front();
        if(now==ft-1){
            dq.pop_front();
            now++;
        }else {
            if(stock>=2){
                stock-=2;
                now++;
            }else if(stock==1){
                stock--;
                dq.pop_back();
                now++;
            }else {
                dq.pop_back();
                if(!dq.empty()){
                    dq.pop_back();
                    now++;
                }
            }
        }
    }
    cout<< now+stock/2 << endl;
}
