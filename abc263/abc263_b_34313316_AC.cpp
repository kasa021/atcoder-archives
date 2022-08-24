/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/34313316
 * Submitted at: 2022-08-24 13:13:22
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_b
 * Result: AC
 * Execution Time: 5 ms
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
    int p[n+1];
    for(int i=2;i<=n;i++){
        cin>>p[i];
    }
    int j=n,cnt=1;
    while(1){
        int a=p[j];
        if(a==1){
            cout<<cnt<<endl;
            return 0;
        }
        j=p[j];
        cnt++;
    }
}