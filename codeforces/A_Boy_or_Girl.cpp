#include<bits/stdc++.h>
using namespace std;
void soln(){
string s;
cin>>s;
int n=s.length();
set<char>str;
for(int i=0;i<n;i++){
    
    str.insert(s[i]);
}
int c=str.size();
if(c%2==0)
cout<<"CHAT WITH HER!"<<endl;
else
cout<<"IGNORE HIM!"<<endl;
}
int main(){
    soln();
    return 0;
}
