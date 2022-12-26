#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;string str;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            
        str.push_back(s[i]);
    }}
    sort(str.begin(),str.end());
    cout<<str[0];
    
    for(int i=1;i<str.size();i++){
        cout<<"+"<<str[i];
    }
   
}
int main(){
    soln();
    return 0;
}