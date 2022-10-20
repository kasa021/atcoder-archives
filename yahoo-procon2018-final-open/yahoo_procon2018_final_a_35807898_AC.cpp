/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/yahoo-procon2018-final-open/submissions/35807898
 * Submitted at: 2022-10-20 11:05:06
 * Problem URL: https://atcoder.jp/contests/yahoo-procon2018-final-open/tasks/yahoo_procon2018_final_a
 * Result: AC
 * Execution Time: 272 ms
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

vector<int> primev(int n){
    vector<int> ans;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) ans.push_back(i);
        while(n%i==0) n/=i;
    }
    if(n!=1) ans.push_back(n);
    return ans;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> cnt(100009,0);
    rep(i,n){
        int a;
        cin>>a;
        auto v=primev(a);
        rep(j,1<<(int)v.size()){
            int t=1;
            rep(l,(int)v.size()){
                if(j&(1<<l)) t*=v[l];
            }
            cnt[t]++;
        }
    }

    rep1(i,1,m+1){
        auto v=primev(i);
        int s=0;
        rep1(j,1,1<<(int)v.size()){
            int t=1;
            rep(l,(int)v.size()){
                if(j&(1<<l)) t*=v[l];
            }
            int indx;
            if(__builtin_popcount(j)%2==0)indx=-1;
            else indx=1;
            s+=indx*cnt[t];
            //cout<< s << endl;
        }
        cout<< n-s << endl;
    }
}