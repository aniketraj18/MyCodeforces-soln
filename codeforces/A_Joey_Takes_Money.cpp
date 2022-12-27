#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n;
    cin>>n;
    l p=1;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        p*=v[i];
    }
    cout<<2022*(p+(n-1)*1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    soln();}
    return 0;
}