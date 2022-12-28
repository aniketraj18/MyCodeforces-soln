#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;int sum1=0,sum2=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i=i-2){
        sum1+=v[i];
    }
    for(int j=n-2;j>=0;j-=2){
        sum2+=v[j];
    }
    cout<<sum1<<" "<<sum2<<endl;
}
int main(){
    soln();
    return 0;
}