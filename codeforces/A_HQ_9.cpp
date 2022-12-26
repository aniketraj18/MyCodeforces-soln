#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;bool flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
        flag=1;break;}
        else{
            flag=0;
        }}
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}
int main(){
    soln();
    return 0;
}