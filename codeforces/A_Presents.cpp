#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]=i+1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<m[v[i]]<<' ';
    }

}
int main(){
    soln();
    return 0;
}