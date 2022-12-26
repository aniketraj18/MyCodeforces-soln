#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(auto it:v)
        cout<<it<<" ";
        cout<<endl;
}
int main(){
    soln();
    return 0;
}