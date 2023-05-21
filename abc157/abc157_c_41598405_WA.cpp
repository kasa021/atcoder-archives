/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/41598405
 * Submitted at: 2023-05-21 06:38:00
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_c
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<char> a(n);
    for(int i=0;i<n;i++) a[i]='x';
    for(int i=0;i<m;i++){
        int s;
        char c;
        cin>>s>>c;
        s--;
        if(a[s]=='x') a[s]=c;
        else if(a[s]!=c){
            cout<<-1<<endl;;
            return 0;
        }
    }
    if(n>1 && a[0]=='0') {
        cout<<-1<<endl;
        return 0;
    }else {
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]=='x') a[i]='0';
            ans=ans*10+(a[i]-'0');
        }
        cout<<ans<<endl;
    }
}
