#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;
    bool f=1;
    for(int i=1;i<s.length();i++){
        if(s[i]>=97&&s[i]<=122){
        f=0;
        break;}}
        if(f==1){
            for(int i=0;i<s.length();i++){
                if(s[i]>=97)
                s[i]=s[i]-32;
                else
                s[i]+=32;
            }
            cout<<s;

        }
        else{
            cout<<s;
        }
        
}
    int main(){
        soln();
        return 0;
    }