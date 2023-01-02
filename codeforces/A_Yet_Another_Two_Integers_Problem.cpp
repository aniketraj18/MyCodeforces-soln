#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l a,b;
    cin>>a>>b;
    l i=a;
    l diff=abs(a-b);
    if(diff%10==0)
    cout<<diff/10<<endl;
    else
    cout<<(diff/10)+1<<endl;
}
    int main(){
        int t;
        cin>>t;
        while(t--){
        soln();}
        return 0;
    }