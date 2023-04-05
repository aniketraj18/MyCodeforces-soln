#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n,d;
    cin>>n>>d;
    string s;
    string ns=to_string(d);
    string ans="";string res;
    cin>>s;bool flag=0;
    for(int i=0;i<n;i++){
        if(s[i]>=ns[0])
        ans+=s[i];
        else{
            flag=1;
            ans+=ns[0];
            res=s.substr(i,n-i);
            break;
        }
        
        
    }if(flag)
    cout<<ans+res<<endl;
    else
    cout<<ans+res+ns[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}