#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);int diff=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
         diff=diff+v[n-1]-v[i];
    }
    cout<<diff<<endl;
}
int main(){
    soln();
    return 0;
}