/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/41677729
 * Submitted at: 2023-05-25 01:15:19
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_c
 * Result: WA
 * Execution Time: 33 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> b(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
            b[i][j]--; // 0-indexed
        }
    }
    int x=(b[0][0]-b[0][0]%7)/7,y=b[0][0]%7;
    for(int i=x;i<n+x;i++){
        for(int j=y;j<m+y;j++){
            if(b[i-x][j-y]!=i*7+j){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
}
