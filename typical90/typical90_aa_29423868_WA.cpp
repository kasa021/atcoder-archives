/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29423868
 * Submitted at: 2022-02-19 10:58:02
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_aa
 * Result: WA
 * Execution Time: 252 ms
 */

#include <bits/stdc++.h>
#include <string>
#include <map>
using namespace std;

int n;
string s[1 << 18];
map<string, int > Map;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        if(Map[s[i]] == 0){
            Map[s[i]] ==1;
            cout<<i<<endl;
        }
    }
    return 0;
}
