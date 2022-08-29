/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/34434781
 * Submitted at: 2022-08-29 02:15:27
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_d
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
    string s;
    cin>>s;
    int a[7];
    for(int i=0;i<7;i++){
        if(s[i]=='a') a[i]=1;
        if(s[i]=='t') a[i]=2;
        if(s[i]=='c') a[i]=3;
        if(s[i]=='o') a[i]=4;
        if(s[i]=='d') a[i]=5;
        if(s[i]=='e') a[i]=6;
        if(s[i]=='r') a[i]=7;
    }
    int cnt=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<7;j++){
            if(a[i]>a[j])cnt++;
        }
    }
    cout<<cnt<<endl;
}