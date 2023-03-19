#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }bool flag=1;
    for(int i=0;i<n;i++)
    m[v[i]]++;
    for(int i=0;i<n;i++){
        if(m[v[i]]>1){
        flag=0;break;}
        else
        flag=1;

    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            soln();
        }
        return 0;
    }