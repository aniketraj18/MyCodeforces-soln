#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;
    int n=s.length();
    string str="";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        str[i]=' ';
        else
       str[i]=s[i];    
       }
       cout<<str<<endl;
    
}
int main(){
    soln();
    return 0;
}