/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36243765
 * Submitted at: 2022-11-05 12:39:05
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_d
 * Result: WA
 * Execution Time: 8 ms
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
    vector<int> a(n);
    vector<int> cnt2(n,0),cnt3(n,0);
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

    int c2=1000000,c3=1000000;
    rep(i,n){
        c2=min(c2,cnt3[i]);
        c3=min(c3,cnt2[i]);
    }

    rep(i,n){
        ans+=cnt2[i]-c2;
        ans+=cnt3[i]-c3;
    }
    cout<< ans << endl;
}