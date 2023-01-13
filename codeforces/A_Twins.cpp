#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++){
    cin>>v[i];}
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    int x=0,c=0;
    for(int i=n-1;i>=0;i--){
        x+=v[i];
        sum=sum-v[i];
        c++;
        if(x<=sum){
            continue;
            }
            else
            break;

    }
    cout<<c<<endl;

}
int main(){
    soln();
    return 0;
}