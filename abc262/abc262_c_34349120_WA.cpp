/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/34349120
 * Submitted at: 2022-08-26 12:32:12
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_c
 * Result: WA
 * Execution Time: 217 ms
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
    int a[n+1];
    set<int> s;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==i){
            s.insert(i);
        }
    }
    int ans=0,cnt=0;
    ans+=(s.size()*(s.size()-1))/2;
    for(int i=1;i<=n;i++){
        if(i!=a[i]){
            if(i==a[a[i]]) cnt++;
        }
    }
    ans+=cnt/2;
    cout<<ans<<endl;
    return 0;
}