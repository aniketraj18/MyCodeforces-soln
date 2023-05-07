#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    int n;
    cin>>n;
    vector<l>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    sort(v.begin(),v.end());
    l p1=v[0]*v[1];
    l p2=v[n-1]*v[n-2];
    cout<<max(p1,p2)<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}