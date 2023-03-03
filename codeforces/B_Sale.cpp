#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n,m;
    cin>>n>>m;
    int c=1,sum=0;
    vector<int>v(n);
    vector<int>p;
    for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]<0){
        p.push_back(abs(v[i]));
        
    }
    }
    sort(p.begin(),p.end());
    int j=p.size()-1;
    while(j>=0&&c<=m){
        sum+=p[j];c++;j--;
    }
    cout<<sum<<endl;
}
int main(){
    soln();
    return 0;
}