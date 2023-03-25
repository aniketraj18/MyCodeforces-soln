#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);
    int e=0,o=0;
    for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0)
    e=e+v[i];
    else
    o+=v[i];

}
if(e>o)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}