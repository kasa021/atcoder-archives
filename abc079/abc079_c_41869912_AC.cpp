/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/41869912
 * Submitted at: 2023-05-31 08:54:27
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    for(int i=0;i<(1<<3);i++){
        int sum = s[0]-'0';
        for(int j=0;j<3;j++){
            if(i & (1<<j)){
                sum += s[j+1]-'0';
            }else {
                sum -= s[j+1]-'0';
            }
        }
        if(sum==7){
            cout<<s[0];
            for(int j=0;j<3;j++){
                if(i & (1<<j)){
                    cout<<"+";
                }else {
                    cout<<"-";
                }
                cout<<s[j+1];
            }
            cout<<"=7"<<endl;
            return 0;
        }
    }
}