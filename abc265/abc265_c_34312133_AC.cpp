/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34312133
 * Submitted at: 2022-08-24 12:17:42
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_c
 * Result: AC
 * Execution Time: 16 ms
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
   int h,w;
   cin>>h>>w;
   string s[h];
   rep(i,h){
    cin>>s[i];
   }
   int i=0,j=0;

   while(1){
    if(s[i][j]=='U'&&i!=0){
        s[i][j]='a';
        i--;
        continue;
    }
    if(s[i][j]=='D'&&i!=h-1){
        s[i][j]='a';
        i++;
        continue;
    }
    if(s[i][j]=='L'&&j!=0){
        s[i][j]='a';
        j--;
        continue;
    }
    if(s[i][j]=='R'&&j!=w-1){
        s[i][j]='a';
        j++;
        continue;
    }
    if(s[i][j]=='a'){
        cout<<"-1"<<endl;
        return 0;
    }
    if(s[i][j]=='U'&&i==0){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
    if(s[i][j]=='D'&&i==h-1){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
     if(s[i][j]=='L'&&j==0){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
     if(s[i][j]=='R'&&j==w-1){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
   }
}