#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s,t;
    cin>>s>>t;
    int i=0,j=s.length()-1;
    bool flag=1;
    while(i<s.length()){
        if(s[i]!=t[j]){
        flag=0;
        break;}
        i++;
        j--;

    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){
    soln();
    return 0;
}