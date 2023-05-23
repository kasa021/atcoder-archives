/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/41640828
 * Submitted at: 2023-05-23 04:18:08
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_c
 * Result: AC
 * Execution Time: 750 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i+1); // 1-indexed
    }
    for(int i=0;i<q;i++){
        int x,k;
        cin>>x>>k;
        if(mp[x].size()<k){
            cout<<-1<<endl;
        }else {
            cout<<mp[x][k-1]<<endl;
        }
    }
}
