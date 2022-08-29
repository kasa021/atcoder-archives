/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/34445716
 * Submitted at: 2022-08-29 13:42:45
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_d
 * Result: AC
 * Execution Time: 124 ms
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
    cin>>n;
    vector<P> p(n);
    rep(i,n){
        int a,b;
        cin>>a>>b;
        p[i]=P(a,b);
    }
    sort(p.begin(),p.end());
    vector<P> s;
    s.push_back(p[0]);
    for(int i=1;i<n;i++){
        int size=s.size()-1;
        if(s[size].second<p[i].first){
            s.push_back(p[i]);
        }else{
            if(s[size].second<p[i].second)
            s[size].second=p[i].second;
        }
    }

    int size=s.size();
    rep(i,size){
        cout<<s[i].first<<" "<<s[i].second<<endl;
    }
}