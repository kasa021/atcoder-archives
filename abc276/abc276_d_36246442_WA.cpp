/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36246442
 * Submitted at: 2022-11-05 12:47:37
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_d
 * Result: WA
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
    int n;
    ll ans=0;
    cin>>n;
    vector<int> a(n);
    vector<int> cnt2(n),cnt3(n);
    rep(i,n) cin>>a[i];
    
    rep(i,n){
        int res2=0,res3=0;
        if(a[i]==1) {
            cnt2[i]=0;
            cnt3[i]=0;
            continue;
        }
        while(a[i]!=1){
            if(a[i]%2==0){
                res2++;
                a[i]/=2;
                if(a[i]==1){
                    cnt2[i]=res2;
                    continue;
                }
            }
            else if(a[i]%3==0){
                res3++;
                a[i]/=3;
                if(a[i]==1){
                    cnt3[i]=res3;
                    continue;
                }
            }else {
                cout<< "-1" << endl;
                return 0;
            }
        }
    }

    sort(all(cnt2));
    sort(all(cnt3));
    rep1(i,1,n){
        ans+=cnt2[i]-cnt2[0];
        ans+=cnt3[i]-cnt3[0];
    }
    cout<< ans << endl;
}