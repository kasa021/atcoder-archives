/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36240219
 * Submitted at: 2022-11-05 12:29:02
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

int cnt(vector<int> &a){
    int res=0;
    for(auto v:a){
        while(v!=1){
            if(v==1) continue;
            if(v%2==0){
                res++;
                v/=2;
                if(v==1) continue;
            }else {
                res=-1;
                return res;
            }
            if(v%3==0){
                res++;
                v/=3;
                if(v==1) continue;
            }else {
                res=-1;
                return res;
            }
        }
    }
    return res;
};

int main() {
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int res=0;
    for(auto v:a){
        if(v==1) continue;
        while(v!=1){
            if(v%2==0){
                res++;
                v/=2;
                if(v==1) continue;
            }
            else if(v%3==0){
                res++;
                v/=3;
                if(v==1) continue;
            }else {
                res=-1;
                cout<< res << endl;
                return 0;
            }
        }
    }

    cout<< res << endl;
}