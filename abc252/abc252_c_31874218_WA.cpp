/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31874218
 * Submitted at: 2022-05-21 13:35:18
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_c
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<(n); ++i)
using ll = long long;


int main(){
    int n;
    cin>>n;
    set<int> p[10];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int count;
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(s[k] == '0' + j){
                    count = p[j].size();
                    p[j].insert(k);
                    if(count==(int)p[j].size()){
                        int b=*rbegin(p[j])+10;
                        p[j].insert(b);
                    }

                }
            }
        }

    }
    vector<int> a(10);
    for(int i=0;i<10;i++){
        a[i] = *rbegin(p[i]);
}

    int ans= 10000000;
    rep(i,10) ans=min(ans,a[i]);
    ans--;
    printf("%d", ans);
    return 0;

}