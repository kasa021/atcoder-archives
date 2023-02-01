/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/38531611
 * Submitted at: 2023-02-01 14:50:40
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
 * Result: WA
 * Execution Time: 303 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int n,size=0;
    cin>>n;
    vector<int> a;
    set<int> st;
    map<int,int> mp;
    rep(i,n){
        int q;
        cin>>q;
        if(q==1){
            int x;
            cin>>x;
            a.push_back(x);
        }else if(q==2){
            if(size==0 ){
                cout<< a[0] << endl;
                mp[a[0]]--;
            }else {
                int b=*st.begin();
                cout<< b << endl;
                mp[b]--;
                if(mp[b]==0) st.erase(b);
                size--;
            }
        }else {
            for(auto v:a) {
                st.insert(v);
                mp[v]++;
            }
            a.resize(0);
            size=st.size();
        }
    }
    }
