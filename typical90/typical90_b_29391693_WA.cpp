/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29391693
 * Submitted at: 2022-02-17 14:44:08
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_b
 * Result: WA
 * Execution Time: 150 ms
 */

#include <iostream>
#include <string>
using namespace std;

bool hantei(string S){
    int a=0;

    for(int i = 0; i < S.size(); i++){
        if(S[i] == '(') a+=1;
        if(S[i] == ')') a-=1;
        if(a<0) return false;
    }
    if(a==0) return true;
    return false;

}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<(1<<n); i++){
        string a="";
        for(int j= n-1; j>=0; j--){
            if((i &(1<<n)) == 0) a +="(";
            else a+=")";
        }
        bool b=hantei(a);
        if(b== true ) cout<<a<<endl;
    }
 return 0;

}
