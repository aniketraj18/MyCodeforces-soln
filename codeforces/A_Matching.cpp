#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    string s;
    cin>>s;
    int n=s.length();
    int p=1;
    if(s[0]=='0'){
        
        cout<<"0"<<endl;

    }
    else{
    for(int i=1;i<n;++i){
        if(s[i]=='?')
        p=p*10;
    }
    if(s[0]=='?')
    p=p*9;cout<<p<<endl;}
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}