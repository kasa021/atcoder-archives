/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34428029
 * Submitted at: 2022-08-28 13:11:58
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_c
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

int S(int x1,int y1,int x2,int y2,int x3,int y3){
    int s=abs((x1-x3)*(y2-y3)-(x2-x3)*(y1-y3));
    return s;
}

int main() {
     int ax,ay,bx,by,cx,cy,dx,dy;
     cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
     int s=S(ax,ay,bx,by,cx,cy); 
     int s1=S(bx,by,cx,cy,dx,dy);
     int s2=S(cx,cy,dx,dy,ax,ay);
     int s3=S(dx,dy,ax,ay,bx,by);
     if(s==(s1+s2+s3)||s1==(s+s2+s3)||s2==(s3+s+s1)||s3==(s+s1+s2)) cout<<"No"<<endl;
     else cout<<"Yes"<<endl;

    
    }