/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31209759
 * Submitted at: 2022-04-23 13:39:22
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_c
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    string l;
    l= "abcdefghijklmnopqrstuwxyz";
    int n,k;
    cin>>n>>k;
    multiset<char> ms;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=0;j<(int)s.size();j++){
            char S =s[j];
            ms.insert(S);
        }
    }
    int a[30];
    for(int i=0;i<26;i++){
       
            char S =l[i];
        a[i] = ms.count(S)
        
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(a[i]>=k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}