#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n;
    cin>>n;
    if(n==1)
    cout<<n/2<<endl;
    else if(n==2)
    cout<<'0'<<endl;
    else{
        if(n%2==0)
        cout<<(n/2)-1<<endl;
        else
        cout<<n/2<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
}