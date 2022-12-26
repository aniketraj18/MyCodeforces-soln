#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n,k;
    cin>>n>>k;
    vector<int>v(n);
    if(k<=n/2){
        int j=1;
    for(int i=1;i<=k;i++){
        v.push_back(j);
        j+=2;
    }}
    cout<<v[k]<<endl;
}
int main(){
    soln();
    return 0;
}