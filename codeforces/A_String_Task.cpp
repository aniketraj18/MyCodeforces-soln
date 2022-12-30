#include<bits/stdc++.h>
using namespace std;
void soln(){
string s;
cin>>s;
string str="";
for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y'){
        str;

    }
    else{str.push_back('.');
        if(s[i]>=65&&s[i]<=90)
        str.push_back(s[i]+32);
        else
        str.push_back(s[i]);
    }
}
cout<<str<<endl;
}
int main(){
    soln();
    return 0;
}