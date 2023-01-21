#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;bool flag=0;
    int i=0;
    
        if((s[i]=='Y'||s[i]=='y')&&(s[i+1]=='e'||s[i+1]=='E')&&(s[i+2]=='s'||s[i+2]=='S'))
        flag=1;
        else
        flag=0;
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;}
int main(){
    int t;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;}