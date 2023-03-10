#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0)
        e.push_back(i+1);
        else
        o.push_back(i+1);

    }
    int odd=o.size();
    int even=e.size();
    if(odd>=3){
        cout<<"YES"<<endl;
        cout<<o[0]<<" "<<o[1]<<" "<<o[2]<<endl;

    }
    else if(odd>=1&&even>=2){
        cout<<"YES"<<endl;
        cout<<o[0]<<" "<<e[0]<<" "<<e[1]<<endl;
    }
    else
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}