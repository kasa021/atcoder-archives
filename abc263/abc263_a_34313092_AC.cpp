/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/34313092
 * Submitted at: 2022-08-24 13:02:21
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_a
 * Result: AC
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
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    vector<int> s(14);
    s[a]++;
    s[b]++;
    s[c]++;
    s[d]++;
    s[e]++;
    bool f=false,l=false;
    for(int i=1;i<=13;i++){
        if(s[i]==2) f=true;
        if(s[i]==3) l=true;
    }
    if(f&&l) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}