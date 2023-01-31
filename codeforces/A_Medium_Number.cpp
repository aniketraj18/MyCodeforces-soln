#include<bits/stdc++.h>
using namespace std;
void soln(){
    vector<int>v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[1]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}