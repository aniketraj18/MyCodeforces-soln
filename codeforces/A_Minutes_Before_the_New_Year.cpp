#include<bits/stdc++.h>
using namespace std;
void soln(){
    int h,m;
    cin>>h>>m;
    cout<<((abs(h-23))*60)+60-m<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}