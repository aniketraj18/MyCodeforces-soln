#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;
    string str="codeforces";int c=0;
    for(int i=0;i<10;i++){
        if(s[i]!=str[i])
        c++;
    }
    cout<<c<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}