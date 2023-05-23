/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/41640631
 * Submitted at: 2023-05-23 04:07:48
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_c
 * Result: AC
 * Execution Time: 27 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=s.size();
    int l=0,r=size-1;
    while(l<r){
        if(s[l]!=s[r]){
            if(s[r]=='a'){
                r--;
            }else {
                cout<< "No" << endl;
                return 0;
            }
        }else {
            l++;
            r--;
        }
    }
    cout<< "Yes" << endl;
}