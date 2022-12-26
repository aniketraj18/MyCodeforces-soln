#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;
    int n=s.length();int c=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])
        c++;
        else{
            if(c>=7)
            break;
            else
            c=1;
        }
    }
    if(c>=7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){
    soln();
    return 0;
}