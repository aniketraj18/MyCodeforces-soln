#include<bits/stdc++.h>
using namespace std;
void soln(){
    vector<int>v(4);
    for(int i=0;i<4;i++)
    cin>>v[i];
    int m1=max(v[0],v[1]);
    int m2=max(v[2],v[3]);
    sort(v.begin(),v.end());
    if((v[2]==m1||v[2]==m2)&&(v[3]==m1||v[3]==m2))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}