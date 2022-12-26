#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;int a,b;int limit=0;
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        limit=limit+b-a;
        v.push_back(limit);
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<endl;}
    int main(){
        soln();
        return 0;
    }